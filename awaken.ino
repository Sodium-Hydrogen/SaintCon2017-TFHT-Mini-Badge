/* This code is by Mike Julander
   @Nah012 on github or @sodium_hydrogen on twitter
   This is a public service for anyone to upload to their
   SaintCon TFHT mini-badge to "Awaken the Alien".
*/


// REYE is the pin for the right eye of the alien and
// LEYE is the pin connected to the left eye.
// Both Are PWM pins

int REYE = 1;
int LEYE = 0;

// These are the global variables for modeOne
// They control the modes
// Mode Zero is off
// Mode One is on
// Mode two is off fading to on
// Mode three is on fading to off
int rMode = 2;
int lMode = 2;

// Function Prototypes
// modeOne fades the eyes on and off
void modeOne(unsigned long);
// modeTwo flashes the eyes on and off really fast
void modeTwo(unsigned long);


void setup() {
  // Set the pinModes
  pinMode(REYE, OUTPUT);
  pinMode(LEYE, OUTPUT);
  pinMode(A1, INPUT);
  // Give the random number generator a more random seed
  // to keep it from repeating itself between different runs
  randomSeed(A1);
}

void loop() {
  // modeOne runs between 5 seconds and 20 seconds
  modeOne(millis() + random(5000, 20000));
  // modeTwo runs between 2 seconds and 20 seconds
  modeTwo(millis() + random(2000, 20000));
}



void modeOne(unsigned long runTime) {
  // Declare the the next modes for the eyes
  int rNext = 0;
  int lNext = 0;

  // Run until time is up
  while (millis() < runTime) {

    // Declare the vairables for randomizing
    // the modes for the eyes
    int rRand = random(0, 2);
    int lRand = random(0, 2);

    // This provides the gradients
    for (int i = 0; i < 255; i++) {

      // Write to the REYE pin and figure out the next mode
      if (rMode == 0) {
        analogWrite(REYE, 0);
        if (rRand == 0) {
          rNext = 0;
        } else {
          rNext = 2;
        }
      } else if (rMode == 1) {
        analogWrite(REYE, 255);
        if (rRand == 0) {
          rNext = 1;
        } else {
          rNext = 3;
        }
      } else if (rMode == 2) {
        analogWrite(REYE, i);
        if (rRand == 0) {
          rNext = 1;
        } else {
          rNext = 3;
        }
      } else {
        analogWrite(REYE, 255 - i);
        if (rRand == 0) {
          rNext = 0;
        } else {
          rNext = 2;
        }
      }

      // Write to the LEYE pin and figure out the next mode
      if (lMode == 0) {
        analogWrite(LEYE, 0);
        if (lRand == 0) {
          lNext = 0;
        } else {
          lNext = 2;
        }
      } else if (lMode == 1) {
        analogWrite(LEYE, 255);
        if (lRand == 0) {
          lNext = 1;
        } else {
          lNext = 3;
        }
      } else if (lMode == 2) {
        analogWrite(LEYE, i);
        if (lRand == 0) {
          lNext = 1;
        } else {
          lNext = 3;
        }
      } else {
        analogWrite(LEYE, 255 - i);
        if (lRand == 0) {
          lNext = 0;
        } else {
          lNext = 2;
        }
      }
      // Set a little delay so the gradual fading is set over a longer time period
      delay(2);
    }// End for loop
    // Switch to the next modes
    rMode = rNext;
    lMode = lNext;
  }// End while loop

}// end void modeOne()


void modeTwo(unsigned long runTime) {
  // Run until time is up
  while (millis() < runTime) {
    analogWrite(REYE, 255);
    analogWrite(LEYE, 0);
    delay(30);
    analogWrite(REYE, 0);
    analogWrite(LEYE, 255);
    delay(30);
  }// end hile loop
}// end void modeTwo()
