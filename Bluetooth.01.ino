Arduino Bluetooth Modül.01

#include <SoftwareSerial.h> // Bu kütüphane bize TX ve RX pini olmayan pinleri TX veya RX pini yapmamıza olanak sağlıyor.

 SoftwareSerial Alfa(7,6); // RX, TX Dikkat edilmesi gereken husus arduinodaki rx pini ile bluetooth modulünün tx pini bağdaştırılacak.
 
 
void setup() {
 Serial.begin(9600);
 Alfa.begin(9600);

}

void loop() {
  if( Alfa.available()){ // Eğer Alfa mevcutsa yani TX ve RX pinlerimiz devredeyse ;
  char data=Alfa.read(); // Data adlı bir bellek(hafıza) Alfa'dan veri okusun.  Dikkat! Char sadece karakter hafızasında tutar. ('x') şeklinde kullan.
  Serial.println(data); // Okunan değerleri serial habeleşme aracmızda yani serial ekranda yazdırsın. 
      
  }
}
