#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

void setup() 
{
  servo1.attach(3);
  servo2.attach(4);
  servo3.attach(5);
  servo4.attach(6);
  servo5.attach(7);
  servo6.attach(8);

  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  
   // put your setup code here, to run once:
   Serial.begin(9600);
   Serial.println();

   while(!Serial.available()){
      Serial.print('.');
      delay(500);
   }
}
void loop() {
   int a = Serial.parseInt();
   Serial.print("Serial value received is "); Serial.println(a);
   switch(a){
      case 1:
         Serial.println("Value 1 received");
         for(int i=0;i<=5;i++){
  servo1.write(180);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  delay(2000);

  // move all servos to position 90
  servo1.write(90);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(90);
  delay(2000);

         }
  // move all servos to position 180
  //servo1.write(0);
  //servo2.write(0);
  //servo3.write(0);
  //servo4.write(0);
  //servo5.write(0);
  //servo6.write(0);
  //delay(2000);

         break;

      case 2:
         Serial.println("Value 2 received");
         for(int i=0;i<=5;i++){
          servo1.write(180);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  delay(2000);

  // move all servos to position 90
  servo1.write(90);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(90);
  delay(2000);

  // move all servos to position 180
  //servo1.write(0);
  //servo2.write(0);
  //servo3.write(0);
  //servo4.write(0);
  //servo5.write(0);
  //servo6.write(0);
  //delay(2000);

         }
         
         break;

      case 3:
         Serial.println("Value 3 received");
         for(int i=0;i<5;i++){
            // move all servos to position 0
  servo1.write(180);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  delay(2000);

  // move all servos to position 90
  servo1.write(180);
  servo2.write(90);
  servo3.write(90);
  servo4.write(90);
  servo5.write(90);
  servo6.write(0);
  delay(2000);

  // move all servos to position 180
  //servo1.write(0);
  //servo2.write(0);
  //servo3.write(0);
  //servo4.write(0);
  //servo5.write(0);
  //servo6.write(0);
  //delay(2000);
         
         }
         break;

         case 4:
         Serial.println("Value 4 received");
         for(int i=0;i<5;i++){
            // move all servos to position 0
  servo1.write(180);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  delay(2000);

  // move all servos to position 90
  servo1.write(0);
  servo2.write(0);
  servo3.write(0);
  servo4.write(0);
  servo5.write(0);
  servo6.write(0);
  delay(2000);

         }
         case 5:
         Serial.println("Value 5 received");
         for(int i=0;i<5;i++){
           // move all servos to position 0
  servo1.write(180);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  delay(2000);

  // move all servos to position 90
  servo1.write(180);
  servo2.write(180);
  servo3.write(180);
  servo4.write(180);
  servo5.write(180);
  servo6.write(180);
  delay(2000);

          
         }

         case 6:
         Serial.println("Value 6 received");
         for(int i=0;i<5;i++){
  servo1.write(180);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  delay(2000);

  // move all servos to position 90
  servo1.write(180);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(90);
  servo6.write(90);
  delay(2000);
         
         }
         case 7:
         Serial.println("Value 7 received");
         for(int i=0;i<5;i++){
            // move all servos to position 0
  servo1.write(180);
  servo2.write(0);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  delay(2000);

  // move all servos to position 90
  servo1.write(90);
  servo2.write(90);
  servo3.write(180);
  servo4.write(0);
  servo5.write(180);
  servo6.write(0);
  delay(2000);

         }
         

      default:
         Serial.println("Value outside 1,2,3,4,5,6,7 received");
         break;
   }
   

}
