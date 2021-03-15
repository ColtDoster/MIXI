// this tab handles all of the MIDI controls that will be sent for mode 3


boolean mode3Lit = false;
boolean mode3Buttons[] = {0,0,0,0,0,0,0,0};
int mode3Tol = 5;

int mode3Pots[] = {0,0,0,0};

// zanes example
void mode3 (){
if(!mode3Lit){
  //light up drums MAKE AHELPER FUNCTION
    thirdColor();
  mode3Lit = true;

  
}
  
for(int i = 0; i < 8; i++){
  if(buttonStates[i] == 1 && i != 3 && i != 4){
    mode3Buttons[i] = !mode3Buttons[i];
    if(mode3Buttons[i]){
      usbMIDI.sendControlChange(i+40,127,1); // for the next mode you just add a value to both of those i values
      delay(5);
    }
    else {
      usbMIDI.sendControlChange(i+40,0,1);
      delay(5);
    }
  }
  if(buttonStates[i]==1 && i == 3){
    state = 2;
    mode3Lit = false;
  }
   if(buttonStates[i]==1 && i == 4){
    state = 1;
    mode3Lit = false;
  }
}

for(int i = 0; i < 4; i++){
  int thisPot = potStates[i];
  if(abs(thisPot - mode3Pots[i]) > mode3Tol){
  usbMIDI.sendControlChange(i+48,thisPot,1);
  delay(5);
  mode3Pots[i] = thisPot;
  }

}
}
