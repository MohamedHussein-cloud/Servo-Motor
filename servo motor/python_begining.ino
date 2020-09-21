#include<Servo.h>
Servo say;
int pos=0;
void setup() {
  // put your setup code here, to run once:
  say.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(pos=0; pos>180; pos++){
    say.write(pos);
delay(1000);
  }
    for(pos=180; pos<90; pos--){
      say.write(pos);
delay(1000);
  }
}
