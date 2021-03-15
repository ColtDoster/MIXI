// this tab is the start up animation, so as soon as the teensy is plugged in, the LEDS run through this color sweep

void mode0() {
  //1 by 1 turn them red
  for( int i = 0; i < strip.numPixels(); i++){
    strip.setPixelColor(i,255,0,0);
    strip.show();
    delay(100);
  }
  // 1 by 1 turn them yellow
 for( int i = 0; i < strip.numPixels(); i++){
    strip.setPixelColor(i,255,255,0);
    strip.show();
    delay(100);
  }
  // 1 by 1 turn them green 
 for( int i = 0; i < strip.numPixels(); i++){
    strip.setPixelColor(i,0,255,0);
    strip.show();
    delay(100);
  }
   // 1 by 1 turn them cyan
   for( int i = 0; i < strip.numPixels(); i++){
    strip.setPixelColor(i,0,255,255);
    strip.show();
    delay(100);
  }
  // 1 by 1 turn them blue
   for( int i = 0; i < strip.numPixels(); i++){
    strip.setPixelColor(i,0,0,255);
    strip.show();
    delay(100);
  }
  // 1 by 1 turn them off
   for( int i = 0; i < strip.numPixels(); i++){
    strip.setPixelColor(i,0,0,0);
    strip.show();
    delay(200);
  }
  delay(100);
  // INSERT CODE THAT WILL HAVE THEM FADE INTO THE NEXT STATE
state =1;
  
}
