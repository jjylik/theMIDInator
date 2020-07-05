/*
  Because potentiometers, especially cheaper potentiometers,
  oftentimes can have a little bit of jitter, they may
  quickly switch between two adjacent values. Some care need
  to be taken to make sure to stabilize the values so not
  to constantly send MIDI messages, flooding communications
  and slowing down the program.
*/

void readPots() {

  int diff = 4; // difference amount

  // READ POTENTIOMETERS //
  
  potVal1 = analogRead(pot1);
  potVal2 = analogRead(pot2);
  potVal3 = analogRead(pot3);
  potVal4 = analogRead(pot4);
  potVal5 = analogRead(pot5);
  potVal6 = analogRead(pot6);
  potVal7 = analogRead(pot7);
  potVal8 = analogRead(pot8);
  potVal9 = analogRead(pot9);
  potVal10 = analogRead(pot10);
  potVal11 = analogRead(pot11);
  potVal12 = analogRead(pot12);
  potVal13 = analogRead(pot13);
  potVal14 = analogRead(pot14);
  potVal15 = analogRead(pot15);
  potVal16 = analogRead(pot16);

  // CALCULATE DIFFERENCE BETWEEN NEW VALUE AND LAST RECORDED VALUE //
  
  int potVal1diff = potVal1 - lastPotVal1;
  int potVal2diff = potVal2 - lastPotVal2;
  int potVal3diff = potVal3 - lastPotVal3;
  int potVal4diff = potVal4 - lastPotVal4;
  int potVal5diff = potVal5 - lastPotVal5;
  int potVal6diff = potVal6 - lastPotVal6;
  int potVal7diff = potVal7 - lastPotVal7;
  int potVal8diff = potVal8 - lastPotVal8;
  int potVal9diff = potVal9 - lastPotVal9;
  int potVal10diff = potVal10 - lastPotVal10;
  int potVal11diff = potVal11 - lastPotVal11;
  int potVal12diff = potVal12 - lastPotVal12;
  int potVal13diff = potVal13 - lastPotVal13;
  int potVal14diff = potVal14 - lastPotVal14;
  int potVal15diff = potVal15 - lastPotVal15;
  int potVal16diff = potVal16 - lastPotVal16;
 

  // SEND MIDI MESSAGE //
  
  if (abs(potVal1diff) > diff) // execute only if new and old values differ enough
  {
    MIDImessage(channel, 0, map(potVal1, 0, 1023, 0, 127)); // map sensor range to MIDI range
    lastPotVal1 = potVal1; // reset old value with new reading
  }

  if (abs(potVal2diff) > diff)
  {
    MIDImessage(channel, 1, map(potVal2, 0, 1023, 0, 127));
    lastPotVal2 = potVal2;
  }

  if (abs(potVal3diff) > diff)
  {
    MIDImessage(channel, 2, map(potVal3, 0, 1023, 0, 127));
    lastPotVal3 = potVal3;
  }

  if (abs(potVal4diff) > diff)
  {
    MIDImessage(channel, 3, map(potVal4, 0, 1023, 0, 127));
    lastPotVal4 = potVal4;
  }

  if (abs(potVal5diff) > diff)
  {
    MIDImessage(channel, 4, map(potVal5, 0, 1023, 0, 127));
    lastPotVal5 = potVal5;
  }

  if (abs(potVal6diff) > diff)
  {
    MIDImessage(channel, 5, map(potVal6, 0, 1023, 0, 127));
    lastPotVal6 = potVal6;
  }

  if (abs(potVal7diff) > diff)
  {
    MIDImessage(channel, 6, map(potVal7, 0, 1023, 0, 127));
    lastPotVal7 = potVal7;
  }

  if (abs(potVal8diff) > diff)
  {
    MIDImessage(channel, 7, map(potVal8, 0, 1023, 0, 127));
    lastPotVal8 = potVal8;
  }
  
  if (abs(potVal9diff) > diff)
  {
    MIDImessage(channel, 8, map(potVal9, 0, 1023, 0, 127));
    lastPotVal9 = potVal9;
  }

  if (abs(potVal10diff) > diff)
  {
    MIDImessage(channel, 8, map(potVal10, 0, 1023, 0, 127));
    lastPotVal10 = potVal10;
  }
  
  if (abs(potVal11diff) > diff)
  {
    MIDImessage(channel, 10, map(potVal11, 0, 1023, 0, 127));
    lastPotVal11 = potVal11;
  }

  if (abs(potVal12diff) > diff)
  {
    MIDImessage(channel, 11, map(potVal12, 0, 1023, 0, 127));
    lastPotVal12 = potVal12;
  }


  if (abs(potVal13diff) > diff)
  {
    MIDImessage(channel, 12, map(potVal13, 0, 1023, 0, 127));
    lastPotVal13 = potVal13;
  }

  if (abs(potVal14diff) > diff)
  {
    MIDImessage(channel, 13, map(potVal14, 0, 1023, 0, 127));
    lastPotVal14 = potVal14;
  }

  if (abs(potVal15diff) > diff)
  {
    MIDImessage(channel, 14, map(potVal15, 0, 1023, 0, 127));
    lastPotVal15 = potVal15;
  }

    if (abs(potVal16diff) > diff)
  {
    MIDImessage(channel, 15, map(potVal16, 0, 1023, 0, 127));
    lastPotVal16 = potVal16;
  }



  delay(2); // small delay further stabilizes sensor readings

}
