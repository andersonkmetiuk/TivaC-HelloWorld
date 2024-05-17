#include <Arduino.h>

#define TIME 250

void setup()
{
  pinMode(D1_LED, OUTPUT);
  pinMode(D2_LED, OUTPUT);
  pinMode(D3_LED, OUTPUT);
  pinMode(D4_LED, OUTPUT);
}

void loop()
{
  digitalWrite(D1_LED, HIGH);
  delay(TIME);

  digitalWrite(D1_LED, LOW);
  digitalWrite(D2_LED, HIGH);
  delay(TIME);

  digitalWrite(D2_LED, LOW);
  digitalWrite(D3_LED, HIGH);
  delay(TIME);

  digitalWrite(D3_LED, LOW);
  digitalWrite(D4_LED, HIGH);
  delay(TIME);
  digitalWrite(D4_LED, LOW);
}