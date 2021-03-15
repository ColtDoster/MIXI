// This tab handles all of the MIDI contorls that will be sent for mode 1 


boolean mode1Lit = false;
boolean mode1Buttons[] = {0,0,0,0,0,0,0,0};
int mode1Tol = 5;

int mode1Pots[] = {0,0,0,0};


// zanes example
void mode1 (){
if(!mode1Lit){
  //light up drums MAKE AHELPER FUNCTION
    firstColor();
  mode1Lit = true;

  
}
  
for(int i = 0; i < 8; i++){
  if(buttonStates[i] == 1 && i != 3 && i != 4){
    mode1Buttons[i] = !mode1Buttons[i];
    if(mode1Buttons[i]){
      usbMIDI.sendControlChange(i,127,1); // for the next mode you just add a value to both of those i values
      delay(5);
    }
    else {
      usbMIDI.sendControlChange(i,0,1);
       delay(5);     
    }
  }
  if(buttonStates[i]==1 && i == 3){
    state = 2;
    mode1Lit = false;
  }
   if(buttonStates[i]==1 && i == 4){
    state = 3;
    mode1Lit = false;
  }
}

for(int i = 0; i < 4; i++){
  int thisPot = potStates[i];
  if(abs(thisPot - mode1Pots[i]) > mode1Tol){
  usbMIDI.sendControlChange(i+8,thisPot,1);
  delay(5);
  mode1Pots[i] = thisPot;
  }

}
}
