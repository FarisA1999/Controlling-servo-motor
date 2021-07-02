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
  
  // configure the pins of the resistors as input
   pinMode(A0,INPUT);
   pinMode(A1,INPUT);
   pinMode(A2,INPUT);
   pinMode(A3,INPUT);
   pinMode(A4,INPUT);
 
  
  //determine the control pin for each motor 
   servo1.attach(8);
   servo2.attach(9);
   servo3.attach(10);
   servo4.attach(11);
   servo5.attach(12);
 
  
}

void loop()
{
  // read the value form the adjustable resistors
  int value1 = analogRead(A0);
  int value2 = analogRead(A1);
  int value3 = analogRead(A2);
  int value4 = analogRead(A3);
  int value5 = analogRead(A4);
  
  // conver the range of the value to 180-0 whcih is the range of the servo
  int ang1 =map(value1,0,255,0,180);
  int ang2 =map(value2,0,255,0,180);
  int ang3 =map(value3,0,255,0,180);
  int ang4 =map(value4,0,255,0,180);
  int ang5 =map(value5,0,255,0,180);
  // move the motors to the angle corresponding to the the value of the resistor 
  servo1.write(ang1);
  servo2.write(ang2);
  servo3.write(ang3);
  servo4.write(ang4);
  servo5.write(ang5);
  

  
}