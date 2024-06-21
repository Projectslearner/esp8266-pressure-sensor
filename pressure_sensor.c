/*
    Project name : ESP8266 Pressure Sensor
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-pressure-sensor
*/

#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>

Adafruit_BMP280 bmp; // I2C

void setup() {
  Serial.begin(9600);
  if (!bmp.begin(0x76)) {  // Address 0x76 for some BMP280 modules, 0x77 for others
    Serial.println("Could not find a valid BMP280 sensor, check wiring!");
    while (1);
  }
}

void loop() {
  // Read pressure in Pascals
  float pressure = bmp.readPressure();

  // Read temperature in Celsius
  float temperature = bmp.readTemperature();

  // Calculate altitude (assuming sea level pressure of 1013.25 hPa)
  float altitude = bmp.readAltitude(1013.25);

  // Print values to Serial Monitor
  Serial.print("Pressure: ");
  Serial.print(pressure);
  Serial.println(" Pa");

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  Serial.print("Altitude: ");
  Serial.print(altitude);
  Serial.println(" m");

  delay(2000);  // Delay between readings
}
