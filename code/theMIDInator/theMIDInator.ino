// THE MIDINATOR //

// Author: Daniel Jansson // Switch & Lever // switchandlever.com

// This code is a companion to the YouTube video on how to build a MIDI controller (called
// The MIDInator) linked below:

// https://youtu.be/JZ5yPdoPooU

// The MIDInator uses an Arduino MEGA 2560, connected to a keypad, a few potentiometers, rotary
// encoders, switches and a joystick to send MIDI messages over USB serial to a Serial to
// MIDI bridge software running on the computer.

// COMPONENT LIST

// 1x   Arduino Bluno MEGA 2560
// 16x  10kOhm (B10K) linear rotary potentiometer
// 4x   APS EC12 rotary encoder 24 step encoder

// The libraries used in this sketch can be found at:

// Keypad.h :: https://github.com/Chris--A/Keypad
// Encoder.h :: https://github.com/PaulStoffregen/Encoder

// Please refer to the documentation for the individual libraries on their respective
// operation and function.

// This code is licensed under a GNU General Public License and may be freely modified
// and redistributed under the same license terms.
// https://www.gnu.org/licenses/gpl-3.0.en.html


#define ENCODER_DO_NOT_USE_INTERRUPTS
#include <Encoder.h>

Encoder myEnc1(25, 24);
Encoder myEnc2(31, 30);
Encoder myEnc3(47, 46);
Encoder myEnc4(53, 52);
long position1  = -999;
long position2  = -999;
long position3  = -999;
long position4  = -999;
int encVals[4] = {64, 64, 64, 64}; // set initial value of encoder to mid range of 0-127

// POTENTIOMETERS //
// Discrete variables for easier wiring issue troubleshooting
const int pot1 = A0;
const int pot2 = A1;
const int pot3 = A2;
const int pot4 = A3;
const int pot5 = A4;
const int pot6 = A5;
const int pot7 = A6;
const int pot8 = A7;
const int pot9 = A8;
const int pot10 = A9;
const int pot11 = A10;
const int pot12 = A11;
const int pot13 = A12;
const int pot14 = A13;
const int pot15 = A14;
const int pot16 = A15;

int potVal1 = 0;
int potVal2 = 0;
int potVal3 = 0;
int potVal4 = 0;
int potVal5 = 0;
int potVal6 = 0;
int potVal7 = 0;
int potVal8 = 0;
int potVal9 = 0;
int potVal10 = 0;
int potVal11= 0;
int potVal12 = 0;
int potVal13 = 0;
int potVal14 = 0;
int potVal15 = 0;
int potVal16 = 0;

int lastPotVal1 = 0;
int lastPotVal2 = 0;
int lastPotVal3 = 0;
int lastPotVal4 = 0;
int lastPotVal5 = 0;
int lastPotVal6 = 0;
int lastPotVal7 = 0;
int lastPotVal8 = 0;
int lastPotVal9 = 0;
int lastPotVal10 = 0;
int lastPotVal11 = 0;
int lastPotVal12 = 0;
int lastPotVal13 = 0;
int lastPotVal14 = 0;
int lastPotVal15 = 0;
int lastPotVal16 = 0;

int channel = 176;

void setup() {
  Serial.begin(115200);
}


void loop() {
  readEncoder();      // read roraty encoder
  readPots();         // read potentiometers
}
