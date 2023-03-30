#include <SPI.h>
#include <LoRa.h>

void setup() 
{
  LoRa.begin();
}

void loop() 
{
  LoRa.beginPacket();
  LoRa.print("Fire, walk with me!");
  LoRa.endPacket();
  delay(5000);
}
