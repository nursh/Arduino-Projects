const int potPin = A0;

void setup() {
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value = analogRead(potPin);
  Serial.print("Reading value: ");
  Serial.println(value);
  delay(1000);
  float voltage = analogToVoltage(value);
  Serial.print("Reading value to voltage: ");
  Serial.println(voltage);
}

float analogToVoltage(int value) {

  return (5.0/1023.0) * value;
}



