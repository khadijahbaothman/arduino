#include <Wire.h>
#include <NewPing.h>
#include <Servo.h>

Servo myservo1;
Servo myservo2;

#define TRIGGER_PIN_1 7
#define ECHO_PIN_1 6
#define MAX_DISTANCE 400

NewPing sonar1(TRIGGER_PIN_1,ECHO_PIN_1,MAX_DISTANCE);

float distance1;
float duration1;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
myservo1.attach(11); // Servo pin
myservo2.attach(10); // Servo pin
}
void loop() {
// put your main code here, to run repeatedly:
duration1=sonar1.ping();
distance1=(duration1 / 2)*0.0343;
Serial.println(distance1);
if(distance1 < 35){ // set the minimum distance here
myservo1.write();
myservo2.write(90);
delay(600);}

else{
myservo1.write(90);
myservo2.write(0);
}
}
