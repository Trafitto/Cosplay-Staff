


#include "Util.h"

    #define D0 16
    #define D1 5 //USE THIS
    #define D2 4
    #define D3 0
    #define D4 2
    #define D5 14
    #define D6 12
    #define D7 13



//Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, D1, NEO_GRB + NEO_KHZ800);


void setup() {
  init(1,D1);
  setAllOff();

}

void loop() {


  //ShowExample();

  Breath(1,255,0.02,0.01);
}






