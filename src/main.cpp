#include <Arduino.h>

#define BTM_PIN 15
#define LED_PIN 16

void setup() {
  Serial.begin(115200);
  pinMode(BTM_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  int state = digitalRead(BTM_PIN);
  Serial.printf("pin state: %d\n", state);

  if (state == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }

  delay(500);
}
