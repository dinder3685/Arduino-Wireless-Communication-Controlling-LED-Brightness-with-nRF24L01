/*
* Arduino Wireless Communication Tutorial
*       Example 1 - Transmitter Code
*                
* by Dejan Nedelkovski, www.HowToMechatronics.com
* 
* Library: TMRh20/RF24, https://github.com/tmrh20/RF24/
*/

#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

RF24 radio(7, 8); // CE, CSN

const byte address[6] = "00001";
int potPin = A1; // Potentiometer connected to A1

void setup() {
  Serial.begin(9600);
  radio.begin();
  radio.openWritingPipe(address);
  radio.setPALevel(RF24_PA_MIN);
  radio.stopListening();
}

void loop() {
  int potValue = analogRead(potPin);
  String potValueStr = String(potValue);
  radio.write(potValueStr.c_str(), potValueStr.length() + 1);
  delay(200); // Adjust the delay as needed
}
