

int d_time = 100;


void setup() {
  
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
}

void loop() {
  int i = 0;
  for(; i < 8; i++) {
    digitalWrite(i, LOW);
    delay(d_time);
    digitalWrite(i + 1, LOW);
    delay(d_time);
    digitalWrite(i, HIGH);
  }

  digitalWrite(8, HIGH);

  
}
