#include <AFMotor.h>
#include <Wire.h>
const int trigPin = A0; 
const int echoPin = A1;
AF_DCMotor motorM1(1); 
AF_DCMotor motorM2(2); 
AF_DCMotor motorM3(3); 
AF_DCMotor motorM4(4); 
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH);
  float distance_cm = duration / 58.2;
  if (distance_cm<15){
    moveBackward();
    delay(700);
    rightTurn();
    delay(1500);
    leftTurn();
    delay(1500);
    moveForward();
    delay(700);
  }
  else{
    moveForward();
  }
  delay(100);
}

void moveForward() {
  motorM1.setSpeed(200);
  motorM2.setSpeed(200);
  motorM3.setSpeed(200);
  motorM4.setSpeed(200);
  motorM1.run(FORWARD);
  motorM2.run(FORWARD);
  motorM3.run(FORWARD);
  motorM4.run(FORWARD);
}

void moveBackward() {
  motorM1.setSpeed(150);
  motorM2.setSpeed(150);
  motorM3.setSpeed(150);
  motorM4.setSpeed(150);
  motorM1.run(BACKWARD);
  motorM2.run(BACKWARD);
  motorM3.run(BACKWARD);
  motorM4.run(BACKWARD);
}

void rightTurn() {
  motorM1.setSpeed(0);  
  motorM2.setSpeed(0);
  motorM3.setSpeed(150); 
  motorM4.setSpeed(150);
  motorM1.run(RELEASE); 
  motorM2.run(RELEASE);
  motorM3.run(FORWARD); 
  motorM4.run(FORWARD);
}


void leftTurn() {
  motorM1.setSpeed(150); 
  motorM2.setSpeed(150);
  motorM3.setSpeed(0);
  motorM4.setSpeed(0);
  motorM1.run(FORWARD); 
  motorM2.run(FORWARD);
  motorM3.run(RELEASE); 
  motorM4.run(RELEASE);
}
