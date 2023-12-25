
![Screenshot (1)](https://github.com/Shrevatsa-saaimurugan/humitity_dector/assets/152064810/315d58c3-958e-4cce-a006-b99fd55b6163)

This C++ code serves as an interface with a DHT11 sensor, specifically engineered for the dual-purpose of measuring both temperature and humidity. The code is structured as follows:

1. **Libraries:**
   The code includes the requisite library for DHT sensors: `#include <DHT.h>`.
    This library facilitates communication and interaction with DHT series sensors.

3. **Constants:**
   Two constants are defined to tailor the code to the specific DHT11 sensor configuration.
   `DHTPIN` denotes the digital pin (Pin 2 in this instance) to which the DHT11 sensor is connected, and `DHTTYPE` specifies the sensor model (DHT11).

5. **DHT Object Initialization:**
   An instance of the DHT class is created and named `dht`.
    This instance is configured with the predefined pin (`DHTPIN`) and sensor type (`DHTTYPE`), establishing a link between the code and the physical DHT11 sensor.

7. **Setup Function:**
   The `setup` function initializes serial communication at a baud rate of 9600,
   preparing the system for subsequent data transmission. Additionally, the DHT sensor is initialized within this function, ensuring it is ready to provide accurate readings.

9. **Loop Function:**
   The `loop` function orchestrates the continuous operation of the code.
   It encompasses a 2-second delay to allow for a reasonable interval between consecutive sensor readings. Subsequently, the code retrieves both humidity and temperature readings from the DHT sensor.

11. **Check for Read Failures:**
   A conditional statement verifies the validity of the sensor readings.
If either the humidity or temperature reading is not a number (NaN), an error message is printed to the serial monitor, and the function exits to prevent erroneous data processing.

13. **Print Sensor Readings:**
   In cases where the sensor readings are valid, the code prints the humidity and temperature values to the serial monitor in a comprehensible format,
 allowing for real-time monitoring of the environmental conditions.

**Additional Details on `readHumidity` Function:**
   Implicitly invoked within the code, the `readHumidity` function is an integral part of the DHT library.
   This function specifically focuses on retrieving and returning the humidity data from the DHT11 sensor. 
   It plays a pivotal role in the overall functionality of the script, contributing to the acquisition of precise and up-to-date environmental data.
   The modular design of the DHT library abstracts the intricacies of data retrieval, enhancing the code's readability and maintainability.
