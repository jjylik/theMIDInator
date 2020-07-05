/*
  The values of the two encoders are stored in an array. This
  allows the values to be remembered when changing inbetween
  encoders using the rotary switch. The rotary switch sets
  the cVal value which determines which position in the array
  the value is stored at, and retrieved from.

  While the rotary encoders can turn essentially forever their
  values are constrained to match MIDI note values (0-127).

*/
void readEncoder() {

  long newPos1 = myEnc1.read();
  long newPos2 = myEnc2.read();
  long newPos3 = myEnc3.read();
  long newPos4 = myEnc4.read();
 
  if (newPos1 > position1) {  // increases encoder #1
    position1 = newPos1;
    encVals[0]++;
    encVals[0] = constrain(encVals[0], 0, 127);

    MIDImessage(channel, 16, encVals[0]);
  }

  if (newPos1 < position1) {  // decreases encoder #1
    position1 = newPos1;
    encVals[0]--;
    encVals[0] = constrain(encVals[0], 0, 127);

    MIDImessage(channel, 16, encVals[0]);
  }


if (newPos2 > position2) {
    position2 = newPos2;
    encVals[1]++;
    encVals[1] = constrain(encVals[1], 0, 127);

    MIDImessage(channel, 17, encVals[1]);
  }

  if (newPos2 < position2) {
    position2 = newPos2;
    encVals[1]--;
    encVals[1] = constrain(encVals[1], 0, 127);

    MIDImessage(channel, 17, encVals[1]);
  }

  
if (newPos3 > position3) {
    position3 = newPos3;
    encVals[2]++;
    encVals[2] = constrain(encVals[2], 0, 127);

    MIDImessage(channel, 18, encVals[2]);
  }

  if (newPos3 < position3) {
    position3 = newPos3;
    encVals[2]--;
    encVals[2] = constrain(encVals[2], 0, 127);

    MIDImessage(channel, 18, encVals[2]);
  }


  if (newPos4 > position4) {
    position4 = newPos4;
    encVals[3]++;
    encVals[3] = constrain(encVals[3], 0, 127);

    MIDImessage(channel, 19, encVals[3]);
  }

  if (newPos4 < position4) {
    position4 = newPos4;
    encVals[3]--;
    encVals[3] = constrain(encVals[3], 0, 127);

    MIDImessage(channel, 19, encVals[3]);
  }
  
  delay(5);

}
