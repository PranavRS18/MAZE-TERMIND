
#include <Servo.h>  // include the servo library

Servo myservo1;  // create Servo object to control servo 1
Servo myservo2;  // create Servo object to control servo 2


void setup()
{
  myservo1.attach(3);  // attaches servo 1 on pin 3 to the Servo object
  myservo2.attach(5);  // attaches servo 2 on pin 5 to the Servo object
}

void loop() 
{
  // setting initial angles to servos
  myservo1.write(180);      // sets the servo angle to 0
  myservo2.write(0);    // sets the servo angle to 180
}
