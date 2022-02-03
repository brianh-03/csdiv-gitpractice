#include <Arduino.h>
int addtwoint(int, int);

void setup() {
  // put your setup code here, to run once:
  addtwoint(5, 6);
}

void loop() {
  // put your main code here, to run repeatedly:
}

int addtwoint(int a, int b) {
  return a+b;
}