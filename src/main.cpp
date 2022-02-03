#include <Arduino.h>
int mult2int(int, int);

void setup() {
  // put your setup code here, to run once:
  mult2int(5, 7);
}

void loop() {
  // put your main code here, to run repeatedly:
}

int mult2int(int a, int b) {
  return a*b;
}