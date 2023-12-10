/*
  CTC GO! MOTION 
  PROJECT - Wave Generator

  This sketch is written to accompany Stage 3 of the Wave Generator project
*/


#include <Servo.h>

Servo servo_rotate;
Servo servo_arm;

int button = 2;
int lightSensor = A1;
int potPin = A0;

int lightValue = 0;
int potValue = 0;

int new_potValue;
int new_lightValue;

int buttonState = LOW;
_____ previousState = LOW;
_____ isButtonPressed = false;

int modeCounter = 1;

void setup()
{  
  pinMode(button, _____);
  servo_rotate.attach(6);
  servo_arm.attach(9);
  Serial.begin(9600);
}

void loop() {
  
  potValue = analogRead(potPin);
  Serial.println(potValue);
  new_potValue = map(potValue, 100, 900, 0, 180);
  servo_rotate.write(new_potValue);
  delay(20);
  
  lightValue = analogRead(lightSensor);
  Serial.println(lightValue);  
  new_lightValue = map(lightValue, 0, 1023, 0, 180);
  servo_arm.write(new_lightValue);
  delay(20);
  
  Serial.println("");
  //delay(250);
  
  buttonState = digitalRead(_____);
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
  
}

void updateModeCounter()
{
    if(modeCounter < 2)
    {
      modeCounter ++ ;
      Serial.println("Counter value : ");
      Serial.println(modeCounter);
    }
    else
    {
      modeCounter = 1 ;  
      Serial.println("Counter value: ");
      Serial.println(modeCounter);
    }
}

