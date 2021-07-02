#include <Servo.h>

 //define an object for each motor
  Servo servo1;
  Servo servo2;
  Servo servo3;
  Servo servo4;
  Servo servo5;


void setup()
{
  //servo pins configuration as output 
  pinMode(12, OUTPUT);	
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
 
  
  //determine the control pin for each motor 
   servo1.attach(8);
   servo2.attach(9);
   servo3.attach(10);
   servo4.attach(11);
   servo5.attach(12);
 
  
}

void loop()
{
  // move the motors to 90 angle 
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  
 delay (1000);
  
  // move the motors back  to 0 angle 
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  
  delay (1000);
}