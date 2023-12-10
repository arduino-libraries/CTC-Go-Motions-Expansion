/*
  CTC GO! MOTION 
  PROJECT - Wave Generator

  This sketch is written to accompany Stage 5 of the Wave Generator project
*/

#include <Servo.h>

Servo servo_rotate;
Servo servo_arm;

int button = 2;
int potPin = A0;
int lightSensor = A1;

int potValue = 0;
int lightValue = 0;

int new_potValue;
int new_lightValue;
int timing_lightValue;

int buttonState = LOW;
int isButtonPressed = LOW;
boolean isButtonPressed = false;

int modeCounter = 1;

void setup()
{
  pinMode(button, INPUT);
  servo_rotate.attach(6);
  servo_arm.attach(9);
  Serial.begin(9600);
}

void loop() 
{
  
  potValue = analogRead(potPin);
  Serial.println(potValue);
  new_potValue = map(potValue, 0, 1023, 0, 180);
  servo_rotate.write(new_potValue);
  delay(20);
  
  lightValue = analogRead(lightSensor);
  Serial.println(lightValue);  
  // new_lightValue = map(lightValue, 100, 900, 0, 180);
  // servo_arm.write(new_lightValue);
  // delay(20); 
  
  Serial.println("");
  //delay(250);
  
   buttonState = digitalRead(button); 
  if (prevButtonState != buttonState)
  { 
    isButtonPressed = buttonState;
  } 
    
  if (isButtonPressed == true)
  {
     updateModeCounter();
     isButtonPressed = false;
  }
  
  prevButtonState = buttonState;  
  
  switch(_____)
  {
    case 1:
    Serial.println("mode 1");
    _____;
    break;
    
    case 2:
    Serial.println("mode 2");
    _____;
    break;
  }
  
}

void updateModeCounter()
{
    if(modeCounter < 2)
    {
      modeCounter ++ ;
    }
    else
    {
      modeCounter = 1 ;  
    }
}

void modeOne()
{
  new_lightValue = map(lightValue, 100, 900, 0, 180);
  servo_arm.write(new_lightValue);
  delay(20);   
}

void modeTwo()
{
  timing_lightValue = map(_____, 100, 900, 0, 500);
  servo_arm.write(10);
  delay(_____);
  servo_arm.write(70);
  delay(____);
}

