#include <Arduino.h>

#define is_signal !digitalRead(0)

bool sost = false;
void setup() {
  pinMode(5, OUTPUT);
  pinMode(0, INPUT_PULLUP);
}

void loop() {
  while (!is_signal)
  {
    
  }
  if (!sost)
  {
    digitalWrite(5, HIGH);
    sost = true;
  } else{
    digitalWrite(5, LOW);
    sost = false;
  }
  while (is_signal)
  {
    
  }
}