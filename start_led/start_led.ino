int LEDPin = 13;
int waitTimeOn = 600;
int waitTimeOff = 400;


void setup() {

  pinMode(LEDPin, OUTPUT);
}

void loop() {

  digitalWrite(LEDPin, LOW);
  delay(waitTimeOff);
  digitalWrite(LEDPin, HIGH);
  delay(waitTimeOn);
}
