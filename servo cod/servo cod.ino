#include <Servo.h>

Servo base;
Servo shoulder;
Servo elbow;
Servo hand;
Servo grapper;
int a;
int pot1=1;
int pot2=2;
int pot3=3;
int pot4=4;
int pot5=5;

void setup() {
base. attach(2);
shoulder. attach(3);
elbow. attach (4);
hand. attach (5);
grapper. attach (6);
 
}
void loop(){
  a= analogRead(pot1);
 for ( a;0, a<=90;a++){
base.write(a);
delay(15);
}
delay(1000);
a= analogRead(pot2);
 for ( a;0, a<=90;a++){
shoulder.write(a);
delay(15);
}
delay(1000);
 a= analogRead(pot3);
 for ( a;0, a<=90;a++){
elbow.write(a);
delay(15);
}
delay(1000);
 a= analogRead(pot4);
 for ( a;0, a<=90;a++){
hand.write(a);
delay(15);
}
delay(1000);
 a= analogRead(pot5);
 for ( a;0, a<=90;a++){
grapper.write(a);
delay(15);
}
delay(1000);
 a= analogRead(pot1);
 for ( a;90, a>=0;a--){
base. write(a);
delay(15);
}
delay(1000);
 a= analogRead(pot2);
 for( a;90, a>=0;a--){
shoulder.write(a);
delay(15);
}
delay(1000);
  a= analogRead(pot3);
 for( a; 90, a>=0;a--){
elbow.write(a);
delay(15);
}
delay(1000);
  a= analogRead(pot4);
 for( a; 90, a>=0;a--){
hand.write(a);
delay(15);
 }
delay(1000);
  a= analogRead(pot5);
 for( a;90, a>=0;a--){
grapper.write(a);
delay(15);
 }
delay(1000);
}
