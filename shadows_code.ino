#include <ESP32Servo.h>
#include <analogWrite.h>
#include <ESP32Tone.h>
#include <ESP32PWM.h>

Servo servo1; // create servo object to control a servo
Servo servo2; // create servo object to control a servo
int posVal = 0; // variable to store the servo position
int servoPin1 = 25; // Servo motor pin
int servoPin2 = 32; // Servo motor pin
int buttonPin = 22;

int armDown = 48;
int armUp = 120;
int turnSpeed = 20;
int oneRoatation = 40;

void setup() {

  //Serial.begin(9600);
  pinMode(buttonPin, INPUT);

  servo1.setPeriodHertz(50); // standard 50 hz servo
  servo2.setPeriodHertz(50); // standard 50 hz servo
  servo1.attach(servoPin1, 500, 2500); // attaches the servo on servoPin to the servo
  servo2.attach(servoPin2, 500, 2500); // attaches the servo on servoPin to the servo
}

void loop() {
  
  //reset the servos
  servo1.write(armUp);
  servo2.write(3);
  delay(10);  

  //wait for button press to start
  while (digitalRead(buttonPin) == 1) {
    delay(10);
  }

  delay(3000);
  
  //bring arm down slowly
  for (int i = armUp; i > 60; i--) {
    servo1.write(i);
    delay(50);
  }

  servo1.write(armUp);
  delay(3000);

  //bring arm down slowly
  for (int i = armUp; i > armDown; i--) {
    servo1.write(i);
    delay(50);
  }

  delay(5000); //bring out card in bag

  //make card appear
  servo2.write(55);
  delay(5000);
  
}
