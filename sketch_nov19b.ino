#include <DHT.h>
 
#define DHTPIN 2  // Pin where the DHT11 is connected
#define DHTTYPE DHT11  // Type of the DHT sensor
 
DHT dht(DHTPIN, DHTTYPE);
 
void setup() {
  Serial.begin(9600);  // Initialize serial communication
  dht.begin();  // Initialize DHT sensor
}
 
void loop() {
  delay(2000);  // Wait for 2 seconds between measurements
 
  float humidity = dht.readHumidity();  // Read humidity
  float temperature = dht.readTemperature();  // Read temperature in Celsius
 
  if (isnan(humidity) || isnan(temperature)) {  // Check if any reads failed
    Serial.println("Failed to read from DHT sensor!");
    return;
  }
 
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println("°C");
}
