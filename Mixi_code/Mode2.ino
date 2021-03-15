// this tab handles all of the MIDI controls that will be sent for mode 2


boolean mode2Lit = false;
boolean mode2Buttons[] = {0,0,0,0,0,0,0,0};
int mode2Tol = 10;

int mode2Pots[] = {0,0,0,0};

// zanes example
void mode2 (){
if(!mode2Lit){
  //light up drums MAKE AHELPER FUNCTION
    secondColor();
  mode2Lit = true;

  
}
  
for(int i = 0; i < 8; i++){
  if(buttonStates[i] == 1 && i != 3 && i != 4){
    mode2Buttons[i] = !mode2Buttons[i];
    if(mode2Buttons[i]){
      usbMIDI.sendControlChange(i+20,127,1); // for the next mode you just add a value to both of those i values
      delay(5);
    }
    else {
      usbMIDI.sendControlChange(i+20,0,1);
    delay(5);
    }
  }
  if(buttonStates[i]==1 && i == 3){
    state = 1;
    mode2Lit = false;
  }
   if(buttonStates[i]==1 && i == 4){
    state = 3;
    mode2Lit = false;
  }
}

for(int i = 0; i < 4; i++){
  int thisPot = potStates[i];
  //if(i != 1){
  if(abs(thisPot - mode2Pots[i]) > mode2Tol){
  usbMIDI.sendControlChange(i+28,thisPot,1);
  delay(5);
  mode2Pots[i] = thisPot;
  }
 //}

}
}
