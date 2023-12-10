/*
  CTC GO! MOTION 
  PROJECT - Wiggler

  This sketch is written to accompany Stage 5 of the Wiggler project
*/

#include <Servo.h>

Servo servo_drive;
Servo servo_steer;

int lightSensor_1 = A0;
int lightSensor_2 = A1;

int lightValue_1 = 0;
int lightValue_2 = 0;

int ______ = 30;
int ______ = 150;

void setup() 
{  
  servo_steer.attach(6);
  servo_drive.attach(9);
  Serial.begin(9600);
}

void loop() 
{
  lightValue_1 = analogRead(lightSensor_1);
  lightValue_2 = analogRead(lightSensor_2);

  Serial.print("First Light Value: ");
  Serial.println(lightValue_1);
  Serial.print("Second Light Value: ");
  Serial.println(lightValue_2);

  servo_drive.write(120);
  servo_steer.write(90);
  delay(15);

  if(lightValue_1 >= 900) {
  /*servo_drive.write(60);
    servo_steer.write(30);
    delay(3000); */
    ____________(right);
  }
  
  if(lightValue_2 >= 900) {
  /*servo_drive.write(60);
    servo_steer.write(150);
    delay(3000); */
    ____________(left);
  }
  
  if(lightValue_1 <= 50 && lightValue_2 <= 50) {
  ____________();  
  }

  delay(100);
}

void ____________(int direction) {
  servo_drive.write(60);
  delay(10);
  servo_steer.write(______);
  delay(3000);
  servo_steer.write(90);
  delay(10);
}

void ____________() {
  servo_drive.write(______);
  servo_steer.write(______);
  delay(5000);
}


