
#include <Servo.h>
 
int switchPin = A0;
 
const int servoPin = 9;
 
Servo servo;
 
 
void setup() {
 
  Serial.begin(9600);
 
  pinMode(switchPin,INPUT);
 
  servo.attach(servoPin);
 
}
 
 
void loop() {
 
  int X=analogRead(switchPin);
 
 if (X<450){
 
    servo.write(30);
 
  }
 
  if(X>450){
 
    servo.write(90);
 
  }
 
Serial.println(X);
 
delay(1);}