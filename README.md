# Analog-data-acquisition-system
The design and implementation of an analog data acquisition system using a microcontroller and an Analog-to-Digital Converter (ADC)
    This mini project demonstrates the design and implementation of an analog data acquisition system using a microcontroller and its built-in Analog-to-Digital Converter (ADC).
Temperature and humidity are measured using the DHT11 sensor, and the data is digitized and processed by the microcontroller for display/logging.

-->Features
1.Acquisition of real-world analog data (temperature & humidity).
2.DHT11 sensor interface for reliable environmental measurements.
3.Built-in ADC of microcontroller for signal conversion.
4.Simple and low-cost hardware suitable for IoT or embedded systems projects.

-->Hardware Components
1.Microcontroller: (e.g., Arduino/ESP32/PIC – specify the exact board used).
2.DHT11 Temperature & Humidity Sensor.
3.Power supply (5V or 3.3V as required).
4.Display (LCD/OLED) or Serial Monitor for data visualization.

-->Working Principle
Sensing: The DHT11 sensor measures ambient temperature and humidity.
Signal Conversion: The sensor output is read by the microcontroller's ADC, which converts the analog signals to digital values.
Processing & Output: The microcontroller processes the data and displays/logs it via serial monitor or an attached display.

#Setup & Usage
->Hardware Setup:
Connect DHT11 sensor to the microcontroller (VCC, GND, and data pin).
Verify ADC reference voltage and power connections.

->Software Setup:
Install the required DHT11 library if using Arduino/ESP.
Upload the provided code to the microcontroller.

->Run & Monitor:
Open the serial monitor (or LCD display) to view real-time temperature and humidity readings.

Block diagram:


<img width="500" height="300" alt="image" src="https://github.com/user-attachments/assets/248f9f19-3231-4830-a57f-482159e6a1d1" />




