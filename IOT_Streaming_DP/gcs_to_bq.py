import apache_beam as beam
from apache_beam.options.pipeline_options import PipelineOptions
from apache_beam.io.gcp.bigquery import WriteToBigQuery
import json

# Function to parse each record from GCS
def parse_gcs_record(line):
    record = json.loads(line)
    return {
        'DeviceID': int(record['DeviceID']),
        'Temperature': float(record['Temperature']),
        'Pressure': float(record['Pressure']),
        'Humidity': int(record['Humidity']),
        'WindSpeed': float(record['WindSpeed'])
    }

def run():
    # Define batch pipeline options for Dataflow
    options = PipelineOptions(
        project='dataplatform-438202',  # Your GCP project ID
        region='us-central1',           # Your GCP region
        temp_location='gs://your-temp-bucket/temp',  # Temp GCS location
        runner='DataflowRunner',        # Set Dataflow as the runner
        service_account_email='27230151676-compute@developer.gserviceaccount.com'  # Service account email
    )

    # Create the Beam pipeline for batch processing
    with beam.Pipeline(options=options) as p:
        # Step 1: Read data from Google Cloud Storage
        gcs_data = (
            p
            | 'Read from GCS' >> beam.io.ReadFromText('gs://raw-iot-data-bucket/raw-data/*.json')
        )

        # Step 2: Parse the raw data
        parsed_data = gcs_data | 'Parse Data' >> beam.Map(parse_gcs_record)

        # Step 3: Write parsed data to BigQuery
        parsed_data | 'Write to BigQuery' >> WriteToBigQuery(
            table='dataplatform-438202:iot_data.processed_data',
            schema={
                'fields': [
                    {'name': 'DeviceID', 'type': 'INTEGER', 'mode': 'REQUIRED'},
                    {'name': 'Temperature', 'type': 'FLOAT', 'mode': 'REQUIRED'},
                    {'name': 'Pressure', 'type': 'FLOAT', 'mode': 'REQUIRED'},
                    {'name': 'Humidity', 'type': 'INTEGER', 'mode': 'REQUIRED'},
                    {'name': 'WindSpeed', 'type': 'FLOAT', 'mode': 'REQUIRED'}
                ]
            },
            write_disposition=beam.io.BigQueryDisposition.WRITE_APPEND
        )

if __name__ == '__main__':
    run()
