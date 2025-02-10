import json
import time
import datetime

def transform_data(element):
    try:
        data = element.split(",")
        device_id = int(data[0])
        temperature = float(data[1])
        pressure = float(data[2])
        humidity = int(data[3])
        wind_speed = float(data[4])
        timestamp_unix = int(data[5])
        timestamp = datetime.datetime.utcfromtimestamp(timestamp_unix).isoformat("T") + "Z"
        transformed_data = {
            "device_id": device_id,
            "temperature": temperature,
            "pressure": pressure,
            "humidity": humidity,
            "wind_speed": wind_speed,
            "timestamp": timestamp
        }
        return json.dumps(transformed_data)
    except Exception as e:
        return json.dumps({"error": str(e), "original_data": element})
