/*
  CTC GO! MOTION 
  PROJECT - Spin-A-Wheel

  This sketch is written to accompany Stage 1 of the Spin-a-Wheel project
*/

int button_1 = 2;
int button_2 = 3;

int buttonState_1;
int buttonState_2;

void setup() {
  
______(button_1, ______);
______(button_2, ______);
Serial.begin(9600);

}

void loop() {

buttonState_1 = ______(button_1);
buttonState_2 = ______(button_2);

if(____________ == HIGH) {
  Serial.println("Button 1 pressed");
  delay(1000);
}

if(____________ == HIGH) {
  Serial.println("Button 2 pressed");
  delay(1000);
}

delay(100);
}

