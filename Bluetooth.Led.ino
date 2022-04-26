#include <SoftwareSerial.h>
SoftwareSerial Bluetooth(7,6); // RX,TX
int Led=3;

void setup(){
  pinMode(Led, OUTPUT);
  Bluetooth.begin(9600);
}

void loop(){
  if(Bluetooth.available()){
    char Data= Bluetooth.read();

    if (Data =='0'){
      delay(50);
      digitalWrite(Led,LOW);
    }
    else if (Data =='1'){
      delay(50);
      analogWrite(Led, 95);
  }
    else if (Data == '2'){
      delay(50);
      analogWrite(Led,138);
      
    }
    else if (Data=='3'){
      delay(50);
      analogWrite(Led,255);
    }
  }
}
