# Arduino-Wireless-Communication-Controlling-LED-Brightness-with-nRF24L01
This project demonstrates how to use Arduino and the nRF24L01 RF module for wireless communication. Specifically, it reads the value from a potentiometer on the transmitter side and controls the brightness of an LED on the receiver side.  
Components Used
2 x Arduino (Uno, Nano, etc.)
2 x nRF24L01 RF modules
1 x Potentiometer
1 x LED
1 x Resistor (220 ohms)
Connecting wires
Breadboard
Circuit Diagram
Transmitter Side
Connect the potentiometer to analog pin A1 on the Arduino.
Connect the nRF24L01 module to the Arduino as follows:
CE to pin 7
CSN to pin 8
SCK to pin 13
MOSI to pin 11
MISO to pin 12
VCC to 3.3V
GND to GND
Receiver Side
Connect the LED to pin 9 (PWM pin) of the Arduino through a 220-ohm resistor.
Connect the nRF24L01 module to the Arduino as follows:
CE to pin 7
CSN to pin 8
SCK to pin 13
MOSI to pin 11
MISO to pin 12
VCC to 3.3V
GND to GND


How It Works :
The transmitter reads the analog value from the potentiometer and sends it as a string to the receiver.
The receiver converts the received string back to an integer.
The receiver maps this integer (0-1023) to a range suitable for controlling the brightness of an LED (0-255).
The LED brightness is adjusted accordingly.
Conclusion
This project demonstrates a simple yet effective way of using nRF24L01 modules for wireless communication between two Arduinos. By modifying the example, you can expand this project to control other devices wirelessly.

References
HowToMechatronics.com
RF24 Library Documentation



