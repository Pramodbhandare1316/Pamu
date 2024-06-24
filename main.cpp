#include <Arduino.h>
void setup() {
  pinMode(13,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13,HIGH);
delay(1000);
digitalWrite(13,LOW);
delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}