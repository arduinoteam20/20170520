//發射端
#include<IRremote.h>
const int buttonPin=3;
int buttonState=0;

IRrecv irsend;

void setup() {
pinMode(buttonPin,INPUT)}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState==HIGH){
    irsend.secndNEC(0x4FB48B7,32);
  }
  irrecv.resume();
  }
}
