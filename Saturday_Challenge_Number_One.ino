#include <Servo.h>

Servo The_Servo;
int pos = 0;

void setup() {
  Serial.begin(9600); //For Deubging
  The_Servo.attach(9);
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    The_Servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
