#include <Servo.h>

const int buttonPin = 10;
const int trigPin = 11;
const int echoPin = 12;

const int redPin = 3;
const int greenPin = 5;
const int bluePin = 6;

float distance = 0;
Servo microServo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  microServo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  distance = getDistance();

  Serial.print(distance);
  Serial.println(" in");

    if (digitalRead(buttonPin) == LOW) {
      microServo.write(45);
      delay(1000);
      microServo.write(0);
    } else {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(bluePin, 0);
  }
  delay(50);
}


float getDistance() {
  float echoTime;
  float calculatedDistance;

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  echoTime = pulseIn(echoPin, HIGH);
  calculatedDistance = echoTime / 148.0;

  return (calculatedDistance);
}