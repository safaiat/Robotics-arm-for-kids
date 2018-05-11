/*
 * Robotic Arm For Babies
 * Project by: Safaiat Hossain
 * Assisted By: Munem Shahriar
 * A tribute to ARDUINO DAY 2018
 * 11 MAY 2018
 * Rajshahi, Bangladesh
 * 
 */
#include <Servo.h>

Servo myservo1; 
Servo myservo2;
// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
 
  myservo1.attach(10); // servo1 arm
  myservo2.attach(9);  // servo2 grip
   // attaches the servo on pin 9 to the servo object
}

void loop() {
  
  for (pos = 60; pos <= 173; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(200);

  for (pos = 180; pos >= 90; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(200);
 
  for (pos = 173; pos >= 60; pos -= 3) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(500);

 for (pos = 90; pos <= 180; pos += 3) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo2.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(500);


 
}

