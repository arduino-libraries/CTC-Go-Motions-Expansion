/*
  CTC GO! MOTION 
  PROJECT - Wave Generator

  This sketch is written to accompany Stage 2 of the Wave Generator project
*/


#include <Servo.h>

_____ servo_rotate;
_____ servo_arm;

int lightSensor = A1;
int potPin = A0;

int lightValue = 0;
int potValue = 0;

int new_potValue;
int new_lightValue;

void setup(){
  
  servo_rotate._____(6);
  servo_arm._____(9);
  Serial.begin(9600);
}

void loop() 
{
  
  lightValue = analogRead(lightSensor);
  Serial.print("Light Value: ");
  Serial.println(lightValue);  
  new_lightValue = map(lightValue, 100, 900, ____, _____);
  servo_arm.____(____);
  delay(20);
  
  potValue = analogRead(potPin);
  Serial.print("Pot Value: "); 
  Serial.println(potValue);
  new_potValue = map(potValue, 0, 1023, ____, ____);
  servo_rotate._____(____);
  delay(20);
  
  Serial.println("");
  //delay(250);
  
}