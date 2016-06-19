
int redLed = 12;
int greenLed = 4;
int yellowLed = 8;
int onTime = 3000;
int yellowTime = 1000;

void setup() {
  
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
}

void loop() {
 
  digitalWrite(redLed, HIGH);
  delay(onTime);
  digitalWrite(redLed, LOW);
  digitalWrite(yellowLed, HIGH);
  delay(yellowTime);
  digitalWrite(yellowLed, LOW);
  digitalWrite(greenLed, HIGH);
  delay(onTime);
  digitalWrite(greenLed, LOW);
}
