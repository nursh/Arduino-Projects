const int potPin = A0;
const int LedPin = 6;

void setup() {
  
  pinMode(LedPin, OUTPUT);
  pinMode(potPin, INPUT);
}

void loop() {

   int value = analogRead(potPin);
   int ledValue = map(value, 0, 1023, 0, 255);
   analogWrite(LedPin, ledValue);
}




