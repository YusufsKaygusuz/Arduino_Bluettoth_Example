//Bluetooth Modülü RGB.03

# include <SoftwareSerial.h>
SoftwareSerial RGB(7,6);

int Red = 11;
int Blue = 10;
int Green = 9;

void setup(){
  pinMode(Red, OUTPUT);
  pinMode(Blue, OUTPUT);
  pinMode(Green, OUTPUT);
  RGB.begin(9600);
  Serial.begin(9600);
}

void loop(){
   if(RGB.available()){
   char Data= RGB.read(); 
   Serial.println(Data);
 
    if(Data == '0'){
    digitalWrite(Red, HIGH);
    digitalWrite(Blue,LOW);
    digitalWrite(Green,LOW);
    delay(5000);
    digitalWrite(Red, LOW);
  } 
  else if (Data == '1'){
    digitalWrite(Red, LOW);
    digitalWrite(Blue, HIGH);
    delay(5000);
    digitalWrite(Blue,LOW);
  }
    
  else if (Data=='2'){
    digitalWrite(Blue,LOW);
    digitalWrite(Green,HIGH);
    delay(5000);
    digitalWrite(Green,LOW);
  }
 
  }
  
  else{
    digitalWrite(Red, LOW);
    digitalWrite(Green,LOW);
    digitalWrite(Blue,LOW);
  }
  }
 

  
