#include <IRremote.h>

int RECV_PIN = 11;
IRrecv irrecv(RECV_PIN);
decode_results res;

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
 if(irrecv.decode(&res)){
  Serial.println(res.value, HEX);
  irrecv.resume();
 }

  delay(100);
}
