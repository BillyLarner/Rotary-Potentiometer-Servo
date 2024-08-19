#include <Servo.h>    //allows for the use of servos by calling the servo library

Servo myservo;    //creates a servo called myservo

int servoPin = 3; //names pin 3 "servoPin"
int potPin = 0;   //names pin 0 "potPin"
int potVal;       //creates an interger called potVal


void setup() {
  myservo.attach(servoPin);   //attaches the servo to servoPin
}

void loop() {
  potVal = analogRead  (potPin);            //reads the value of potPin
  potVal = map(potVal, 0, 1023, 0, 180);    //assigns values of potVal to degrees on the servo
  myservo.write(potVal);                    //updates the servos position
  delay(15);                                //waits 15ms
}
