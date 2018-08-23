#include <Eled.h>


    #define D0 16
    #define D1 5 //USE THIS
    #define D2 4
    #define D3 0
    #define D4 2
    #define D5 14
    #define D6 12
    #define D7 13


Eled eled(1,D1);



void setup() {

  eled.setAllOff();
}

void loop() {
   eled.BreathBlue(255,0.008,5);
}






