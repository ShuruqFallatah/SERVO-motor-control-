#include <Servo.h>

Servo base; 
Servo shoulder;
Servo elbow;
int a=0;
int b=1;
void setup() {
base. attach(3);
shoulder. attach(4);
elbow. attach (5);
 
}
void loop(){
 for ( a =0; a<=180;a++){
base.write(a);
delay(15);
}
delay(1000);
 for ( a =0; a<=90;a++){
shoulder.write(a);
delay(15);
}
delay(1000);
 for ( a =0; a<=360;a++){
elbow.write(a);
delay(15);
}
delay(1000);
 for ( a =180; a>=0;a){
base. write(a);
delay(15);
}
delay(1000);
 for( a=90; a>=0;a){
shoulder.write(a);
delay(15);
}
delay(1000);
 for( a =360; a>=0;a){
elbow.write(a);
delay(15);
}
delay(1000);
}
