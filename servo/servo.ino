

#include<Servo.h>
int Servopin=3;
Servo Servo1;
void setup() {
  // put your setup code here, to run once:
  Servo1.attach(Servopin);

}

void loop() {
  // put your main code here, to run repeatedly:
  Servo1.write(0);
  delay(1000);
  Servo1.write(90);
  delay(1000);
  Servo1.write(180);
  delay(1000);
  

}
