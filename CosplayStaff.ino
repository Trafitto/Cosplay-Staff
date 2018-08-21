#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#include "util.h"
#include <Wire.h>

    #define D0 16
    #define D1 5 //USE THIS
    #define D2 4
    #define D3 0
    #define D4 2
    #define D5 14
    #define D6 12
    #define D7 13



Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, D1, NEO_GRB + NEO_KHZ800);

const int MPU=0x68;
int GyX,GyY,GyZ;

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  // Initialize MPU-6050
 /* Wire.begin();
  Wire.beginTransmission(MPU);
  Wire.write(0x6B);  // PWR_MGMT_1 register
  Wire.write(0);     // set to zero (wakes up the MPU-6050)
  Wire.endTransmission(true);8/
}

void loop() {

  /*Wire.beginTransmission(MPU);
  Wire.write(0x3B);  
  Wire.endTransmission(false);
  Wire.requestFrom(MPU,14,true);
  GyX=Wire.read()<<8|Wire.read();  
  GyY=Wire.read()<<8|Wire.read(); 
   GyZ=Wire.read()<<8|Wire.read();
  Serial.print("Gyroscope: ");
  Serial.print("X = "); Serial.print(GyX);
  Serial.print(" | Y = "); Serial.print(GyY);
  Serial.print(" | Z = "); Serial.println(GyZ);
  Serial.println(" ");
  delay(333);*/
  ShowExample();

}






