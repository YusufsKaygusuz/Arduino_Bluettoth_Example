//Araç Frenleme Bluetooth.04

#include <SoftwareSerial.h>
SoftwareSerial BT(7,6);

int motor=9;
 
void setup() {
  BT.begin(9600);
  pinMode(motor,OUTPUT);
}

void loop() {
  if(BT.available()){
   char vites=BT.read();
 
 if(vites=='1'){
  analogWrite(9,51);  
 }
 else if(vites=='2'){
  analogWrite(9,65);
 }
  else if(vites=='3'){
    analogWrite(9,90);
 }
 else if(vites=='4'){
  analogWrite(9,128);
 }
 else if (vites=='5'){
  analogWrite(9,200);
 }
 else if (vites=='6'){
  analogWrite(9,255);
  }
  else if (vites=='0'){
   analogWrite(9,0);
   delay(100);
   analogWrite(9,35);
   delay(100);
   analogWrite(9,0);
   delay(100);
   analogWrite(9,30);
   delay(100);
   digitalWrite(9,LOW);
   
  }
 
}
}
