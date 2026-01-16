#include <Arduino.h>
#include "HWCDC.h"

HWCDC USBSerial;

// put function declarations here:
int myFunction(int, int);

void setup() {
  USBSerial.begin(115200);
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
  USBSerial.println("Hello World");
  delay(1000);
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}