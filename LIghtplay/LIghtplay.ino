int greenLed = 10;
int blueLed = 3;
int greenDelay = 500;
int blueDelay = 200;
String redBlinking = "RedLed is blinking.";
int blinks;

void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  Serial.begin(9600);
  Serial.println("how many times should the led's blink");
  while(Serial.available() == 0) {}
  blinks = Serial.parseInt();
}

void loop() {

  Serial.println(redBlinking);
  for (int i = 1; i <= blinks; i++) {
      Serial.print("This is blink ");
      Serial.println(i);
      digitalWrite(greenLed, HIGH);
      delay(greenDelay);
      digitalWrite(greenLed, LOW); 
      delay(greenDelay);  
  }

  Serial.println();
  Serial.println("YellowLed is blinking.");
  for (int j = 1; j <= blinks; j++) {
    Serial.print("This is blink ");
     Serial.println(j);
    digitalWrite(blueLed, HIGH);
    delay(blueDelay);
    digitalWrite(blueLed, LOW);
    delay(blueDelay);
  }

  Serial.println();
  
}
