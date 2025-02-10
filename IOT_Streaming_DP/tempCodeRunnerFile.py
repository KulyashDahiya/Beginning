import apache_beam as beam
from apache_beam.options.pipeline_options import PipelineOptions, StandardOptions
from apache_beam.io.gcp.pubsub import ReadFromPubSub
from apache_beam.io import WriteToText
import logging
from apache_beam.transforms.window import GlobalWindows
from apache_beam.transforms.trigger import AfterProcessingTime, AccumulationMode

# Function to parse the incoming Pub/Sub messages
def parse_pubsub_message(message):
    message_str = message.decode('utf-8')
    logging.info(f"Received message: {message_str}")
    
    data = message_str.split(", ")
    record = {
        'device_id': data[0].split(": ")[1],
        'temperature': data[1].split(": ")[1],
        'pressure': data[2].split(": ")[1],
        'humidity': data[3].split(": ")[1],
        'wind_speed': data[4].split(": ")[1]
    }
    return record

# Function to format the data as CSV
def format_as_csv(record):
    return f"{record['device_id']},{record['temperature']},{record['pressure']},{record['humidity']},{record['wind_speed']}"

def run():
    pipeline_options = PipelineOptions(
        project='dataplatform-438202',
        region='us-central1',
        temp_location='gs://iot-bucket-demo/temp_data/temp',
        staging_location='gs://iot-bucket-demo/staging',
        runner='DataflowRunner',
        streaming=True
    )

    # Enable streaming mode
    pipeline_options.view_as(StandardOptions).streaming = True

    # Define the pipeline
    p = beam.Pipeline(options=pipeline_options)

    # Define the Pub/Sub topic to read from
    topic_path = 'projects/dataplatform-438202/topics/iot-data'

    # Step 1: Read from Pub/Sub
    messages = (p
                | 'Read from Pub/Sub' >> ReadFromPubSub(topic=topic_path)
                | 'Apply Global Window with Trigger' >> beam.WindowInto(
                    GlobalWindows(),  # Apply global window explicitly
                    trigger=AfterProcessingTime(1 * 60),  # Trigger every 1 minute
                    accumulation_mode=AccumulationMode.DISCARDING
                )
                | 'Parse Messages' >> beam.Map(parse_pubsub_message)
               )

    # Step 2: Format messages as CSV
    formatted_messages = (messages
                          | 'Format as CSV' >> beam.Map(format_as_csv)
                         )

    # Step 3: Write CSV data to GCS
    output_prefix = 'gs://iot-bucket-demo/pub_sub_output/output'  # Update your GCS bucket
    formatted_messages | 'Write to GCS' >> WriteToText(
        output_prefix,
        file_name_suffix='.csv',
        header='device_id,temperature,pressure,humidity,wind_speed',
        shard_name_template='-SS-of-NN'
    )

    # Run the pipeline
    result = p.run()
    result.wait_until_finish()

if __name__ == '__main__':
    run()
