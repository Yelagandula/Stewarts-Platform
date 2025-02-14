#include <Servo.h>

Servo MG996R;

const int middle = 90;

void setup() {
MG996R.attach(10); //Arduino Pin 10
}

void loop() {
for(int pos = 0; pos <= middle; pos++){
MG996R.write(pos);
delay(10);
}
delay(1000);
for(int pos = middle; pos >= 0; pos--){
MG996R.write(pos);
delay(10);
}
}
