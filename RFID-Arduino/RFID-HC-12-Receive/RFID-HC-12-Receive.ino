#include <SPI.h>
#include <MFRC522.h>
#include<SoftwareSerial.h>
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);  // Create MFRC522 instance.
SoftwareSerial HC12(2, 3); //RX, TX

int readsuccess;
byte readcard[4];
char str[32] = "";
String StrUID;

void setup() {
  Serial.begin(9600); // Initialize serial communications with the PC
  HC12.begin(9600);
  SPI.begin();      // Init SPI bus
  mfrc522.PCD_Init(); // Init MFRC522 card
}
// --------------------------------------------------------------------
void loop() {

  while(HC12.available()) {

    Serial.write(HC12.read());
    //delay(1000);
  }
}
