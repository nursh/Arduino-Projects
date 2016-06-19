const int  pin = A0;
const int ppin = A5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int pos = analogRead(ppin);
  int value = analogRead(pin);
  Serial.print("The resistance is : ");
  Serial.println(value);
  Serial.println(pos);
  delay(1000);
  

}  
  
  
  
  
  
 
