
#include <IRremote.h>

IRsend irsend;

void setup()
{
}

void loop() {
  for (int i = 0; i < 3; i++) {
    irsend.sendSony(0x490, 12);
    delay(40);
  }
  delay(5000); //5 second delay between each signal burst
}
