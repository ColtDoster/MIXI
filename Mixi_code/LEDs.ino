// this tab initializes what color the NeoPixel strand should be based on which state the Teensy is in


// displays colors for mode 1
void firstColor() {
 // if (mode1Lit) {
    for (int i = 0; i < 8; i++) {    // colors may not be right 
      if(i != 3 || i != 4){
      strip.setPixelColor(i,0,0,255);
      }
      if(i == 3){
      strip.setPixelColor(i,255,0,0);
      }
      if(i == 4){
      strip.setPixelColor(i,0,255,0);
      }
    }
 // }
  strip.show();
}

//displays colors for mode 2
void secondColor() {
 // if (mode2Lit) {
    for (int i = 0; i < 8; i++) {    // colors may not be right 
      if(i != 3 || i != 4){
      strip.setPixelColor(i,255,0,0);
      }
      if(i == 3){
      strip.setPixelColor(i,0,0,255);
      }
      if(i == 4){
      strip.setPixelColor(i,0,255,0);
      }
    }
 // }
  strip.show();
}

// displays colors for mode3
void thirdColor() {
 // if (mode3Lit) {
    for (int i = 0; i < 8; i++) {    // colors may not be right 
      if(i != 3 || i != 4){
      strip.setPixelColor(i,0,255,0);
      }
      if(i == 3){
      strip.setPixelColor(i,255,0,0);
      }
      if(i == 4){
      strip.setPixelColor(i,0,0,255);
      }
    }
 // }
  strip.show();
}
