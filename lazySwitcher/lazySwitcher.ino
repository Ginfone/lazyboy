#include <Servo.h>

int item;

Servo myServo0;

void setup() {
  pinMode(A3, INPUT);
  myServo0.attach(3);
}

void loop() {
  int item = map(analogRead(A3), 0, 1023, 0, 160);
  myServo0.write(item);
  
  
}

