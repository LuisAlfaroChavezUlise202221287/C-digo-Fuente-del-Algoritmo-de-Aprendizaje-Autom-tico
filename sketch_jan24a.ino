int mg1 =  A0;
int mg2 = A1;
int mg3 = A2;
#include<Servo.h>
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;
Servo myservo5;
Servo myservo6;
int pos = 0;
void setup() {

  Serial.begin(9600);
  myservo1.attach(8);
  myservo2.attach(11);
  myservo3.attach(10);
  myservo4.attach(9);
  myservo5.attach(6);
  myservo6.attach(5);
}

void loop() {
  int read1 = analogRead(mg1);
  //Serial.println(read1);
 

  int read2 = analogRead(mg2);
  //Serial.println(read2);

  int read3 =  analogRead(mg3);
  Serial.println(read3);
  if(read3>450){
    myservo1.write(0);
    myservo2.write(0);
    myservo3.write(0);
    myservo4.write(0);
    myservo5.write(0);
    myservo6.write(0);
    delay(1);
  }
  if(read3<450){
    myservo1.write(150);
    myservo2.write(150);
    myservo3.write(150);
    myservo4.write(150);
    myservo5.write(150);
    myservo6.write(150);

    delay(1);
  }
   delay(100);
}
