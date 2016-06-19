#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results res;

int redPin = 6;
int bluePin = 5;
int greenPin = 3;
 

void setup() {

  irrecv.enableIRIn();
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop() {
   if(irrecv.decode(&res)){
    //Serial.println(res.value);
    switch(res.value){
      case 29417: digitalWrite(redPin, LOW);
                  digitalWrite(greenPin, LOW);
                  digitalWrite(bluePin, HIGH);
                  break;

      case 4841: digitalWrite(redPin, HIGH);
                  digitalWrite(greenPin, LOW);
                  digitalWrite(bluePin, HIGH);
                  break;

      case 21225: digitalWrite(redPin, HIGH);
                  digitalWrite(greenPin, LOW);
                  digitalWrite(bluePin, LOW);
                  break;

      case 13033: digitalWrite(redPin, LOW);
                  digitalWrite(greenPin, HIGH);
                  digitalWrite(bluePin, LOW);
                  break;    
        
    }
    
    irrecv.resume();
   }

  delay(100);
}
