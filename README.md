# ESP8266 Pressure Sensor Project

#### Project Overview
This project demonstrates how to interface an ESP8266 microcontroller with a BMP280 pressure sensor. The BMP280 sensor measures atmospheric pressure, temperature, and altitude. These values are read from the sensor and displayed on the Serial Monitor.

#### Components Needed
- **ESP8266 Microcontroller**
- **BMP280 Pressure Sensor**
- **Jumper Wires**

#### Block diagram


#### Circuit Setup
1. **Connecting the BMP280 to ESP8266:**
   - Connect the BMP280 sensor's VCC pin to the 3.3V pin on the ESP8266.
   - Connect the GND pin of the BMP280 to the GND pin of the ESP8266.
   - Connect the SDA pin of the BMP280 to the SDA pin of the ESP8266.
   - Connect the SCL pin of the BMP280 to the SCL pin of the ESP8266.

#### Instructions
1. **Setup:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Install the required libraries: `Adafruit_Sensor` and `Adafruit_BMP280`.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Operation:**
   - After uploading the code, open the Serial Monitor (baud rate: 9600).
   - Observe the pressure, temperature, and altitude values being printed to the Serial Monitor every 2 seconds.

#### Applications
- **Weather Monitoring:** Measure atmospheric pressure and temperature for weather forecasting.
- **Altitude Measurement:** Calculate altitude based on pressure readings.
- **Environmental Monitoring:** Track changes in environmental conditions over time.

#### Notes
- **Sensor Address:** The BMP280 can have I2C addresses 0x76 or 0x77. Ensure the correct address is used in the code.
- **Sea Level Pressure:** The altitude calculation assumes a sea level pressure of 1013.25 hPa. Adjust this value based on local conditions for more accurate altitude readings.
- **Delay Between Readings:** A delay of 2 seconds is used to prevent spamming the Serial Monitor with data.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Pressure Sensor](https://projectslearner.com/learn/esp8266-pressure-sensor)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner