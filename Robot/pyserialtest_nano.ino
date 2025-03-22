// include the servo library
#include <Servo.h>

// Declare the Servo pins
int servoPin1 = 3;
int servoPin2 = 5;

// Create servo objects
Servo Servo1;
Servo Servo2;

float theta1,theta4;

void setup()
{
  // setting baud rate
  Serial.begin(9600);

  // attaching servos to respective pins
  Servo1.attach(servoPin1);
  Servo2.attach(servoPin2);

  // setting starting position of pen
  Servo1.write(135.51);
  Servo2.write(111.64);

  // wait for servos to rotate
  delay(500);
}

void loop()
{
  // call the function parsePython()
  parsePython();
  
  // set the servos to theta1 and theta4
  Servo1.write(theta1);
  Servo2.write(theta4);

  // wait for the servos to rotate
  delay(500);
}

void parsePython()
{
  // wait until serial data is available 
  while(!Serial.available());

  // read the angles theta1 and theta4 respectively and store in variables
  theta1=Serial.readStringUntil(' ').toFloat();
  theta4 = Serial.readStringUntil('\n').toFloat();

}
