//Always use pins with pulse-width-modulation
//Analog signals are between 0 - 255 with line eqn mapping y = 51(x)

int firstLed = 9;
int secondLed = 3;
int analogSlope = 51;
int blinks = 5;
int voltage = 0;

void setup() {
  Serial.begin(9600);
  Serial.print("Enter the voltage to be applied to the LED's (0V - 5V): ");
  while(Serial.available() == 0) {}
  voltage = Serial.parseInt();
  voltage = mapValueToAnalog(voltage);
  pinMode(firstLed, OUTPUT);
  pinMode(secondLed, OUTPUT);

}

void loop() {
  
  for(int i = 0; i < blinks; i++) {
    analogWrite(firstLed, voltage);
    delay(500);
    analogWrite(firstLed, 0);
    delay(500);
  }

  for(int i = 0; i < blinks; i++) {
    analogWrite(secondLed, voltage);
    delay(500);
    analogWrite(secondLed, 0);
    delay(500);
  }
}

int mapValueToAnalog(int value) {
  return analogSlope * value;
}

