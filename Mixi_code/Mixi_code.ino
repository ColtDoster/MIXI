#include <Adafruit_NeoPixel.h>
#include <Bounce2.h>

int buttonPins[] = {11, 10, 9, 8, 7, 6, 5, 4};
int buttonStates[] = {0, 0, 0, 0, 0, 0, 0, 0};
Bounce * buttons = new Bounce[8];

int potPins[] = {A0, A1, A2, A3};
int potStates[] = {0, 0, 0, 0};

int buttonOffset;

Adafruit_NeoPixel strip(8, 12, NEO_RGB + NEO_KHZ800); //ACTUALLY INITIALIZE A PIN WHENEVER YOU WIRE UP

int state;

void setup() {
Serial.begin(9600);
strip.begin();
strip.clear();
initializeButtons();
delay(2000);
Serial.println("Ready!");

state = 0;

}

void loop() {

  updateButtons();
  updatePots();

switch(state){
case 0: mode0();  break;
case 1: mode1();  break;
case 2: mode2();  break;
case 3: mode3();  break;

  
}

Serial.println(state);


}
