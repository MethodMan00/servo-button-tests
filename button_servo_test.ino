#include <Servo.h>

Servo myServo;
int buttonPin = 2;
int servoPin = 9;
bool buttonState = false;

void setup() {
  myServo.attach(servoPin);
  pinMode(buttonPin, INPUT);
  myServo.write(0);  // Start position
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    myServo.write(90);  // Move to position
  } else {
    myServo.write(0);   // Back to start
  }
}
