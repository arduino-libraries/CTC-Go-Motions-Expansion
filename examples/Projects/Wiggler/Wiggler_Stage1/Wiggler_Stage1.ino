/*
  CTC GO! MOTION 
  PROJECT - Wiggler

  This sketch is written to accompany Stage 1 of the Wiggler project
*/

int lightSensor_1 = A0;
int lightSensor_2 = A1;

int lightValue_1 = 0;
int lightValue_2 = 0;

void setup() {
Serial.begin(9600);
}


void loop() {
  
  lightValue_1 = ______(______);
  lightValue_2 = ______(______);

  Serial.print("First Light Value: ");
  Serial.println(______);
  Serial.print("Second Light Value: ");
  Serial.println(______);
  delay(1000);
}


