/*
 * Change a single RGB LED with a 10k potentiometer and Rainbow effect
 * 
 * This is a sketch written to display a potentiometer's output and have it adjust a single RGBLED depending on the value/angle of the potentiometer.
 *  Sketch will output many values to Serial for debugging. 
 * 
 * No warranty is expressed or implied, use at own risk.
 * 
 * Please take the time to read all the comments if you are unsure of exactly what is happening.
 * 
 * Required Hardware:
 * - Arduino Uno Board
 * - Breadboard
 * - 10K potentiometer
 * - 3x 220ohm resistors
 * - RGB LED
 * 
 * created 28 March 2018
 * by /u/TheMartinDobson
 * 
 * Keep Arduino Open Source, Share, Comment, and Help Others
 */


// setting up the RGB LED's pins as outputs
const int redLEDPin = 10;     // red leg of RGB LED connected to pin 10
const int greenLEDPin = 9;    // green leg of RGB LED connected to pin 9
const int blueLEDPin = 11;    // blue leg of RGB LED connected to pin 11

// assigning the potentiometer's output to analog pin A0
const int potPin = A0;        // analog pin connected to potentiometer

// setting up variables to hold the data for each LED leg of the RGB LED
int redVal = 0;               // value to write to the red LED
int greenVal = 0;             // value to write to the green LED
int blueVal = 0;              // value to write to the blue LED

// potentiometer setup
int potRAW = 0;               // setup potRAW variable as int
int potVal = 0;               // setup potVal variable as an int                 
int wholeNumber = 0;          // setup wholeNumber variable as int
int modVal = 0;               // setup modVal variable as int


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {

// take in the RAW reading from the potentiometer
  potRAW = analogRead(potPin);
  Serial.print("potRAW: ");
  Serial.print(potRAW);                     // print potRaw to Serial for debugging

// map the potentiometer's RAW reading to a range we need for the fader (1530 = 5 steps of 255)
  potVal = map(potRAW, 0, 1023, 0, 1530);
  Serial.print("\t potVal: ");
  Serial.print(potVal);                     // print potVal to Serial for debugging

// using modulous command we can drop anything more than 255 for assigning to the RGB values. Will not ever be greater than 255.
  modVal = potVal % 255;
  Serial.print("\t modVal: ");
  Serial.print(modVal);                     // print modVal to Serial for debugging

// will return whole number of how many times the potVal can be divided by 255 for switch statement
  wholeNumber = potVal / 255.;
  Serial.print("\t wholeNumber: ");
  Serial.print(wholeNumber);                // print wholeNumber to Serial for debugging
  
switch(wholeNumber) { // begin switch
  case 0: // potVal is in first 255 range. Starts at Red, then fades in the green LED to make yellow.
    redVal = 255;
    greenVal = modVal;
    blueVal = 0;
    break;
  case 1: // potVal is in second 255 range (255-510). Starts at yellow then fades out red LED to make green.
    redVal = (255-modVal);
    greenVal = 255;
    blueVal = 0;
    break;
  case 2: // potVal is in third 255 range (510-765). Starts at green then fades in blue LED to make Cyan.
    redVal = 0;
    greenVal = 255;
    blueVal = modVal;
    break;
  case 3: // potVal is in fourth 255 range (765-1020). Starts at Cyan and then fades out green LED to make blue.
    redVal = 0;
    greenVal = (255-modVal);
    blueVal = 255;
    break;
  case 4: // potVal is in fifth 255 range (1020-1275). Starts at blue then fades in redLED to make Indigo.
    redVal = modVal;
    greenVal = 0;
    blueVal = 255;
    break;
  case 5: // potVal is in sixth 255 range (1275-1530). Starts at Indigo then fades out blueLED to make Red. 
    redVal = 255;
    greenVal = 0;
    blueVal = (255-modVal);
    break;
  case 6: // potVal has hit 1530 value. Pure Red.
    redVal = 255;
    greenVal = 0;
    blueVal = 0;
    break;
  default: // if at any point the potVal is out of range or math doesn't work out. RGBLED displays white. Visual Debugger.
    redVal = 255;
    greenVal = 255;
    blueVal = 255;
    break;
} // end switch

    analogWrite(redLEDPin, redVal);         // write the value of redVal to redLEDPin
    analogWrite(greenLEDPin, greenVal);     // write the value of greenVal to greenLEDPin
    analogWrite(blueLEDPin, blueVal);       // write the value of blueVal to blueLEDPin


// print out numerial value to Serial for the output of the LED. (000,000,000) = black, (255,255,255) = white.
    Serial.print("\t RGB Value: ");
    Serial.print("(");
    Serial.print(redVal);
    Serial.print(",");
    Serial.print(greenVal);
    Serial.print(",");
    Serial.print(blueVal);
    Serial.println(")");

// delay program to 20 milliseconds so as to not overload the buffer
delay(20);

} //end loop
