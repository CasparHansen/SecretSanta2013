#include <Servo.h> 
 
Servo myservo;
int pos1 = 70;
int pos2 = 90;
int state = 0; 
void setup() 
{ 
  myservo.attach(9);
  pinMode(7,INPUT);
  digitalWrite(7,HIGH);
  pinMode(8,INPUT);
  digitalWrite(8,HIGH);
} 
 
void loop() 
{ 
  if(state == 0 && digitalRead(7) == HIGH){
    myservo.attach(9);
    myservo.write(pos1);
    delay(1000);
    myservo.detach();
    state = 1;
  }
  if(state == 1 && digitalRead(8) == HIGH) {
    myservo.attach(9);
    myservo.write(pos2);
    delay(1000);
    myservo.detach();
    state = 2;
  }
  delay(500);
} 
