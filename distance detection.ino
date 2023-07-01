#include<NewPing.h>
int Time;
int distance;
void setup()
{
	pinMode(2,OUTPUT);// triger
	pinMode(3,INPUT); // echo
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
	Serial.begin(9600);
	
}
void loop()
{
	digitalWrite(2,HIGH);
	delayMicroseconds(1000);
	digitalWrite(2,LOW);
	delayMicroseconds(500);
	digitalWrite(2,HIGH);
	delayMicroseconds(1000);
	Time = pulseIn(3,HIGH);
   
   distance=0.0343*Time/2;
   Serial.print("Distance from sensor to objectis=");
   Serial.println(distance);
   delay(5);
   if(distance>10 && distance<=100)
   {

digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
}
 if(distance>100 && distance<=150)
   {

digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,LOW);
}
 if(distance>150 && distance<=200)
   {

digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
 if(distance>200 && distance<=250)
   {

digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
 if(distance>250 && distance<=300)
   {

digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
 if(distance>300)
   {

digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
}