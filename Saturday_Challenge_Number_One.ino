#include <Servo.h>

Servo The_Servo;

void setup() {
  Serial.begin(9600); //For Deubging
  The_Servo.attach(9);
  Serial.println("Turning...");
  The_Servo.write(100); //Set servo angle to 100
  Serial.println("Finished turning!");
}
