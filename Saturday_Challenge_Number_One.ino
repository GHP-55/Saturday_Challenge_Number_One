#include <Servo.h>

Servo The_Servo;
int pos = 0;

void setup() {
  Serial.begin(9600); //For Deubging
  The_Servo.attach(9);
}

void loop() {
  /*The_Servo.write(100);
  delay(2000);
  The_Servo.write(-100);*/

  for (pos = 0; pos <= 360; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    The_Servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 360; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    The_Servo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
