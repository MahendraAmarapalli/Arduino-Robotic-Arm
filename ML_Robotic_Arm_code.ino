/*😎THE CODE BY MAHENDRA 🔥*/
#include <SoftwareSerial.h>
#include <Servo.h>
Servo servo01;
Servo servo02;
Servo servo03;
Servo servo04;
Servo servo05;
Servo servo06;

SoftwareSerial Bluetooth(3, 2); // Arduino(RX, TX) - HC-05 Bluetooth (TX, RX)
// Define the pins for the RGB LED
const int redPin =12;
const int greenPin = 4;
const int bluePin = 13;




int wheelSpeed = 1500;

int lbw[50], lfw[50], rbw[50], rfw[50]; // arrays for storing positions/steps

int servo1Pos, servo2Pos, servo3Pos, servo4Pos, servo5Pos, servo6Pos; // current position
int servo1PPos, servo2PPos, servo3PPos, servo4PPos, servo5PPos, servo6PPos; // previous position
int servo01SP[50], servo02SP[50], servo03SP[50], servo04SP[50], servo05SP[50], servo06SP[50]; // for storing positions/steps
int speedDelay = 20;
int index = 0;
int dataIn;
int m = 0;

void setup() {

 // Set the RGB pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  servo01.attach(10);
  servo02.attach(9);
  servo03.attach(8);
  servo04.attach(7);
  servo05.attach(6);
  servo06.attach(5);
  Bluetooth.begin(9600); // Default baud rate of the Bluetooth module
  Bluetooth.setTimeout(5);
  delay(20);
  Serial.begin(9600);
  // Move robot arm to initial position
  servo1PPos = 100;
  servo01.write(servo1PPos);
  servo2PPos = 150;
  servo02.write(servo2PPos);
  servo3PPos = 170;
  servo03.write(servo3PPos);
  servo4PPos = 110;
  servo04.write(servo4PPos);
  servo5PPos = 50;
  servo05.write(servo5PPos);
  servo6PPos = 100;
  servo06.write(servo6PPos);
}

void loop() {
  // Check for incoming data
  if (Bluetooth.available() > 0) {
    dataIn = Bluetooth.read();  // Read the data
    Serial.println(dataIn);
    if (dataIn == 0) {
      m = 0;
    }
    if (dataIn == 1) {
      m = 1;
    }
    if (dataIn == 2) {
      m = 2;
    }
    if (dataIn == 3) {
      m = 3;
    }
    if (dataIn == 4) {
      m = 4;
    }
    if (dataIn == 5) {
      m = 5;
    }
    if (dataIn == 6) {
      m = 6;
    }
    if (dataIn == 7) {
      m = 7;
    }
    if (dataIn == 8) {
      m = 8;
    }
    if (dataIn == 9) {
      m = 9;
    }
    if (dataIn == 10) {
      m = 10;
    }
    if (dataIn == 11) {
      m = 11;
    }
    if (dataIn == 12) {
      m = 12;
    }
    if (dataIn == 14) {
      m = 14;
   
    }
    if (dataIn == 16) {
      m = 16;
    }
    if (dataIn == 17) {
      m = 17;
    }
    if (dataIn == 18) {
      m = 18;
    }
    if (dataIn == 19) {
      m = 19;
    }
    if (dataIn == 20) {
      m = 20;
    }
    if (dataIn == 21) {
      m = 21;
    }
    if (dataIn == 22) {
      m = 22;
    }
    if (dataIn == 23) {
      m = 23;
    }
    if (dataIn == 24) {
      m = 24;
    }
    if (dataIn == 25) {
      m = 25;
    }
    if (dataIn == 26) {
      m = 26;
    }
    if (dataIn == 27) {
      m = 27;
    }

    

    // Move robot arm
    // Move servo 1 in positive direction
    while (m == 16) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo01.write(servo1PPos);
      servo1PPos++;
      digitalWrite(redPin,1);
      delay(speedDelay);
      digitalWrite(redPin,0);
    }
    // Move servo 1 in negative direction
    while (m == 17) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo01.write(servo1PPos);
      servo1PPos--;
       digitalWrite(bluePin,1);
      delay(speedDelay);
      digitalWrite(bluePin,0);
    }
    // Move servo 2
    while (m == 19) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo02.write(servo2PPos);
      servo2PPos++;
      digitalWrite(redPin,1);
      delay(speedDelay);
      digitalWrite(redPin,0);
    }
    while (m == 18) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo02.write(servo2PPos);
      servo2PPos--;
        digitalWrite(bluePin,1);
      delay(speedDelay);
      digitalWrite(bluePin,0);
    }
    // Move servo 3
    while (m == 20) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo03.write(servo3PPos);
      servo3PPos++;
       digitalWrite(bluePin,1);
      delay(speedDelay);
      digitalWrite(bluePin,0);
    
    }
    while (m == 21) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo03.write(servo3PPos);
      servo3PPos--;
      digitalWrite(redPin,1);
      delay(speedDelay);
      digitalWrite(redPin,0);
      
    }
    // Move servo 4
    while (m == 23) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo04.write(servo4PPos);
      servo4PPos++;
     digitalWrite(redPin,1);
      delay(speedDelay);
      digitalWrite(redPin,0);
    }
    while (m == 22) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo04.write(servo4PPos);
      servo4PPos--;
       digitalWrite(bluePin,1);
      delay(speedDelay);
      digitalWrite(bluePin,0);
    }
    // Move servo 5
    while (m == 25) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo05.write(servo5PPos);
      servo5PPos++;
    digitalWrite(redPin,1);
      delay(speedDelay);
      digitalWrite(redPin,0);
    }
    while (m == 24) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo05.write(servo5PPos);
      servo5PPos--;
      digitalWrite(bluePin,1);
      delay(speedDelay);
      digitalWrite(bluePin,0);
    }
    // Move servo 6
    while (m == 26) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo06.write(servo6PPos);
      servo6PPos++;
     
       digitalWrite(bluePin,1);
      delay(speedDelay);
      digitalWrite(bluePin,0);
     
    }
    while (m == 27) {
      if (Bluetooth.available() > 0) {
        m = Bluetooth.read();
      }
      servo06.write(servo6PPos);
      servo6PPos--;
       digitalWrite(redPin,1);
      delay(speedDelay);
      digitalWrite(redPin,0);
    }
     
    // If arm speed slider is changed
    if (dataIn > 101 & dataIn < 250) {
      speedDelay = dataIn / 10; // Change servo speed (delay time)
    }
   // Serial.println(speedDelay);
    // speedINd();
    // If button "SAVE" is pressed
    if (m == 12) {
      ind();
      servo01SP[index] = servo1PPos;  // save position into the array
      servo02SP[index] = servo2PPos;
      servo03SP[index] = servo3PPos;
      servo04SP[index] = servo4PPos;
      servo05SP[index] = servo5PPos;
      servo06SP[index] = servo6PPos;
      index++;                        // Increase the array index
      m = 0;
    }


    // If button "RUN" is pressed
    if (m == 14) { 
        while (dataIn != 13) {   // Run the steps over and over again until "RESET" button is pressed
    for (int i = 0; i <= index - 2; i++) {  // Run through all steps(index)
      if (Bluetooth.available() > 0) {      // Check for incomding data
        dataIn = Bluetooth.read();
        if ( dataIn == 15) {        // If button "PAUSE" is pressed
          while (dataIn != 14) {         // Wait until "RUN" is pressed again
            if (Bluetooth.available() > 0) {
              dataIn = Bluetooth.read();
              if ( dataIn == 13) {
                break;
              }
            }
          }
        }

        // If speed slider is changed
        if (dataIn > 100 & dataIn < 150) {
          speedDelay = dataIn / 10; // Change servo speed (delay time)
        }
      }
      reset_run_pause();
      // Servo 1
      if (servo01SP[i] == servo01SP[i + 1]) {
      }
      if (servo01SP[i] > servo01SP[i + 1]) {
        for ( int j = servo01SP[i]; j >= servo01SP[i + 1]; j--) {
          servo01.write(j);
          delay(speedDelay);
        }
      }
      if (servo01SP[i] < servo01SP[i + 1]) {
        for ( int j = servo01SP[i]; j <= servo01SP[i + 1]; j++) {
          servo01.write(j);
          delay(speedDelay);
        }
      }

      // Servo 2
      if (servo02SP[i] == servo02SP[i + 1]) {
      }
      if (servo02SP[i] > servo02SP[i + 1]) {
        for ( int j = servo02SP[i]; j >= servo02SP[i + 1]; j--) {
          servo02.write(j);
          delay(speedDelay);
        }
      }
      if (servo02SP[i] < servo02SP[i + 1]) {
        for ( int j = servo02SP[i]; j <= servo02SP[i + 1]; j++) {
          servo02.write(j);
          delay(speedDelay);
        }
      }

      // Servo 3
      if (servo03SP[i] == servo03SP[i + 1]) {
      }
      if (servo03SP[i] > servo03SP[i + 1]) {
        for ( int j = servo03SP[i]; j >= servo03SP[i + 1]; j--) {
          servo03.write(j);
          delay(speedDelay);
        }
      }
      if (servo03SP[i] < servo03SP[i + 1]) {
        for ( int j = servo03SP[i]; j <= servo03SP[i + 1]; j++) {
          servo03.write(j);
          delay(speedDelay);
        }
      }

      // Servo 4
      if (servo04SP[i] == servo04SP[i + 1]) {
      }
      if (servo04SP[i] > servo04SP[i + 1]) {
        for ( int j = servo04SP[i]; j >= servo04SP[i + 1]; j--) {
          servo04.write(j);
          delay(speedDelay);
        }
      }
      if (servo04SP[i] < servo04SP[i + 1]) {
        for ( int j = servo04SP[i]; j <= servo04SP[i + 1]; j++) {
          servo04.write(j);
          delay(speedDelay);
        }
      }

      // Servo 5
      if (servo05SP[i] == servo05SP[i + 1]) {
      }
      if (servo05SP[i] > servo05SP[i + 1]) {
        for ( int j = servo05SP[i]; j >= servo05SP[i + 1]; j--) {
          servo05.write(j);
          delay(speedDelay);
        }
      }
      if (servo05SP[i] < servo05SP[i + 1]) {
        for ( int j = servo05SP[i]; j <= servo05SP[i + 1]; j++) {
          servo05.write(j);
          delay(speedDelay);
        }
      }

      // Servo 6
      if (servo06SP[i] == servo06SP[i + 1]) {
      }
      if (servo06SP[i] > servo06SP[i + 1]) {
        for ( int j = servo06SP[i]; j >= servo06SP[i + 1]; j--) {
          servo06.write(j);
          delay(speedDelay);
        }
      }
      if (servo06SP[i] < servo06SP[i + 1]) {
        for ( int j = servo06SP[i]; j <= servo06SP[i + 1]; j++) {
          servo06.write(j);
          delay(speedDelay);
        }
      }
    }
  }


// If button "RESET" is pressed
      if (dataIn != 14) {
       
        memset(servo01SP, 0, sizeof(servo01SP)); // Clear the array data to 0
        memset(servo02SP, 0, sizeof(servo02SP));
        memset(servo03SP, 0, sizeof(servo03SP));
        memset(servo04SP, 0, sizeof(servo04SP));
        memset(servo05SP, 0, sizeof(servo05SP));
        memset(servo06SP, 0, sizeof(servo06SP));
        index = 0;  // Index to 0
      }
    }
  }
}
void ind(){
  digitalWrite(greenPin,1);
  delay(200);
  digitalWrite(greenPin,0);
  delay(200);
 
}
void reset_run_pause(){
 digitalWrite(redPin,1);
 digitalWrite(greenPin,0);
 digitalWrite(bluePin,0); 
 delay(100);
 digitalWrite(redPin,0);
 digitalWrite(greenPin,1);
 digitalWrite(bluePin,0); 
 delay(100);
 digitalWrite(redPin,0);
 digitalWrite(greenPin,0);
 digitalWrite(bluePin,1); 
 delay(100);
 digitalWrite(redPin,0);
 digitalWrite(greenPin,0);
 digitalWrite(bluePin,0); 
}

