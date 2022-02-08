#include <Arduino.h>
#include <Servo.h>
//libraries

Servo servoLeft;
//declaring the right & left servos                      
Servo servoRight;

void setup() //a setup function that runs once when defined (so nothing needs to be called in main loop)
{ 

  servoLeft.attach(13);
  //pin 13 connection
  servoRight.attach(12);
  //pin 12 connection


  //Move forwards a certain distance 
  servoLeft.writeMicroseconds(1700);
  //left wheel move in the CLOCKWISE direction at full speed (1300 microseconds for pin 13 conections - according to chart)
  servoRight.writeMicroseconds(1300);
  //right wheel  move in the counter-clockwise direction at full speed (which is 1700 microseconds for pin 13 conections)
  delay(8000);
  //power the servos at these speeds/directions for a cvertain amount of time (7.4 seconds???)


  servoRight.writeMicroseconds(1450);  //---this will turn left to adjust slightly
  servoLeft.writeMicroseconds(1700);
  delay(440);

  servoLeft.writeMicroseconds(1700);
  //left wheel move in the CLOCKWISE direction at full speed (1300 microseconds for pin 13 conections - according to chart)
  servoRight.writeMicroseconds(1300);
  //right wheel  move in the counter-clockwise direction at full speed (which is 1700 microseconds for pin 13 conections)
  delay(7900);


//adjust for second box tunr left for just under a second
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1700);
  delay(870);
  
  //Move forwards 10 seconds before adjusting again
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(7600); //move forward for 7.2 seconds


  //Move forwards for 10 seconds to D from C
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(13000);

  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  delay(810);

  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(6900);

  servoRight.writeMicroseconds(1450);  //---this will turn left to adjust slightly
  servoLeft.writeMicroseconds(1700);
  delay(1350);

  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(6800);



  //after done cut the signals from pins 12 and 13
  servoLeft.detach();
  servoRight.detach();
}

void loop()
{
}