/*
  CTC GO! MOTION 
  PROJECT - Wave Generator

  This sketch is written to accompany Stage 1 of the Wave Generator project
*/

int potPin = A0;
int lightSensor = A1;

int lightValue = 0;
int potValue = 0;

void setup() {  
  ______(9600); 
}

void loop() {  
  _____ = analogRead(_____);
  Serial._____("Light Value: ");
  Serial.println(_____);  
  delay(20);
  
  _____ = analogRead(____);
  Serial._____("Pot Value: ");
  Serial.println(_____);
  delay(20);
 
  Serial.println(" ");
  delay(250); 
}


