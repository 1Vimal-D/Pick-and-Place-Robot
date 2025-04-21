

#include <Servo.h>

Servo armServo;
int pickupAngle = 0;
int placeAngle = 90;

void setup() {
  armServo.attach(9);  // Pin connected to the servo motor
  Serial.begin(9600);
}

void loop() {
  Serial.println("Picking up object...");
  armServo.write(pickupAngle);  // Arm moves to pick position
  delay(1000);  // Simulating the time to pick up

  Serial.println("Placing object...");
  armServo.write(placeAngle);  // Arm moves to place position
  delay(1000);  // Simulating placing the object

  delay(2000);  // Wait before repeating
}
