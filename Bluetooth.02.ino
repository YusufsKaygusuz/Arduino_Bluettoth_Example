//Bluetooth Modülü.02

#include <SoftwareSerial.h>
SoftwareSerial Beta(7,6);

void setup(){
  pinMode(8,OUTPUT);
  Serial.begin(9600);
  Beta.begin(9600); 
  
}
void loop(){
  if(Beta.available()){
  char data=Beta.read();
  Serial.println(data); 
  
  
  if ( data=='0'){
    digitalWrite(8, HIGH);
    delay(2000);
    digitalWrite(8,LOW);
  }
  
}
}
