
#include <WiFiNINA.h>
#include "definations.h"



void scanWiFi(){
  networks = WiFi.scanNetworks();
  
  if (networks >= 1){
    for(int loops = 0; loops < networks; loops++){
      Serial.println("Found the following networks");
      Serial.print(loops);
      Serial.print(". ");
      Serial.print(WiFi.SSID(loops));
      Serial.print("  Signal Strength");
      Serial.print(WiFi.RSSI(loops));
      Serial.println("dBm");
    }
  }
}
