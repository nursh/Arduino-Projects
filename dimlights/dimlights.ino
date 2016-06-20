#include <stdarg.h>

const int redPin = 11;
const int bluePin = 9;
const int greenPin = 10;
int led[3];


void setup() {
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {

  lightsUp(50, 1, redPin);
  lightsDown(1, redPin);
  lightsUp(500, 2, redPin, bluePin);
  lightsDown(2, redPin, bluePin);
  lightsUp(300, 1, bluePin);
  lightsDown(1, bluePin);
  lightsUp(1000, 2, bluePin, greenPin);
  lightsDown(2, bluePin, greenPin);
  lightsUp(450, 1, greenPin);
  lightsDown(1, greenPin);
  lightsUp(1000, 2, bluePin, greenPin);
  lightsDown(2, bluePin, greenPin);
  lightsUp(300, 1, bluePin);
  lightsDown(1, bluePin);
  lightsUp(1000, 2, bluePin, greenPin);
  lightsDown(2, bluePin, greenPin);
  lightsUp(450, 1, greenPin);
  lightsDown(1, greenPin);
  
  
}

void lightsUp(int delay_time, int pins, ...) {

   va_list ledPins;
   va_start(ledPins, pins); 
   for(int i = 0 ; i <= pins; i++) {
     led[i] = va_arg(ledPins, int);
   }
    
   for(int bright = 0; bright <= 150; bright++) {
    int i = 0;
     while( i < pins) {
        analogWrite(led[i], bright);
        i++;
     }     
      delay(30);
   }
   va_end(ledPins);
   delay(delay_time);
}





void lightsDown(int pins, ...) {

   va_list ledPins;
   va_start(ledPins, pins); 
   for(int i = 0 ; i <= pins; i++) {
     led[i] = va_arg(ledPins, int);
   }

   for(int bright = 150; bright >= 0; bright--) {
      int i = 0;
      while(i < pins) {
        analogWrite(led[i], bright);
        i++;
      }  
      delay(30);
   }
   
   va_end(ledPins);  
}


