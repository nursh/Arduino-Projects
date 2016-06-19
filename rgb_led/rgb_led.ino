int redLed = 11;
int blueLed = 5;
int greenLed = 3;

void setup() {
  
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);

}

void loop() {
  Serial.println("What value of red do you want (0 - 255)");
  while(Serial.available() == 0){}
  int rvalue = Serial.parseInt(); 
  


  Serial.println("What value of blue do you want (0 - 255)");
  while(Serial.available() == 0){}
  int bvalue = Serial.parseInt(); 


  Serial.println("What value of green do you want (0 - 255)");
  while(Serial.available() == 0){}
  int gvalue = Serial.parseInt(); 
  
  analogWrite(redLed, rvalue);
  analogWrite(blueLed, bvalue);
  analogWrite(greenLed, gvalue);
  delay(1000);

  Serial.println();
}
