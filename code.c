#include <DHT.h>

// Define pins
#define DHTPIN 2          // DHT11 data pin connected to digital pin 2
#define DHTTYPE DHT11     // Define sensor type
#define SOIL_PIN A0       // Soil moisture sensor connected to analog pin A0

DHT dht(DHTPIN, DHTTYPE); // Create DHT sensor object

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  // Read soil moisture
  int soilValue = analogRead(SOIL_PIN);
  int soilPercent = map(soilValue, 1023, 0, 0, 100);  // Adjust map if needed

  // Read DHT11 sensor
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check for DHT reading errors
  if (isnan(humidity) || isnan(temperature)) {
   Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Print sensor data
  Serial.println("----- Sensor Readings -----");
  Serial.print("Soil Moisture (%): ");
  Serial.println(soilPercent);
  Serial.print("Humidity (%): ");
  Serial.println(humidity);
  Serial.print("Temperature (C): ");
  Serial.println(temperature);
  Serial.println("---------------------------\n");

  delay(2000); // Delay 2 seconds between readings
}
