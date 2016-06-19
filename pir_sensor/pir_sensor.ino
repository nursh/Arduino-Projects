const int sensor = 8;
const int led = 12;

void setup() {
  
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
  int value = digitalRead(sensor);
  if(value == HIGH) {
  
    digitalWrite(led,HIGH);
  } else {
   
    digitalWrite(led,LOW);
  }


}
