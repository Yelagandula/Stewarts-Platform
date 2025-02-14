
// Include Libraries
#include "Arduino.h"
#include "Servo.h"


// Pin Definitions
#define SERVOMD1_1_PIN_SIG  3
#define SERVOMD2_2_PIN_SIG  4
#define SERVOMD3_3_PIN_SIG  5
#define SERVOMD4_4_PIN_SIG  6
#define SERVOMD5_5_PIN_SIG  7
#define SERVOMD6_6_PIN_SIG  8



// Global variables and defines
const int servoMD1_1RestPosition   = 0;  //Starting position
//const int servoMD1_1TargetPosition = 150; //Position when event is detected
const int servoMD2_2RestPosition   = 0;  //Starting position
//const int servoMD2_2TargetPosition = 150; //Position when event is detected
const int servoMD3_3RestPosition   = 0;  //Starting position
//const int servoMD3_3TargetPosition = 150; //Position when event is detected
const int servoMD4_4RestPosition   = 0;  //Starting position
//const int servoMD4_4TargetPosition = 150; //Position when event is detected
const int servoMD5_5RestPosition   = 0;  //Starting position
//const int servoMD5_5TargetPosition = 150; //Position when event is detected
const int servoMD6_6RestPosition   = 0;  //Starting position
//const int servoMD6_6TargetPosition = 150; //Position when event is detected
// object initialization
Servo servoMD1_1;
Servo servoMD2_2;
Servo servoMD3_3;
Servo servoMD4_4;
Servo servoMD5_5;
Servo servoMD6_6;


// define vars for testing menu
const int timeout = 10000;       //define timeout of 10 sec
char menuOption = 0;
long time0;

// Setup the essentials for your circuit to work. It runs first every time your circuit is powered with electricity.
void setup() 
{
    // Setup Serial which is useful for debugging
    // Use the Serial Monitor to view printed messages
    Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
    
    servoMD1_1.attach(SERVOMD1_1_PIN_SIG);
    servoMD1_1.write(servoMD1_1RestPosition);
    delay(100);
    servoMD1_1.detach();
    servoMD2_2.attach(SERVOMD2_2_PIN_SIG);
    servoMD2_2.write(servoMD2_2RestPosition);
    delay(100);
    servoMD2_2.detach();
    servoMD3_3.attach(SERVOMD3_3_PIN_SIG);
    servoMD3_3.write(servoMD3_3RestPosition);
    delay(100);
    servoMD3_3.detach();
    servoMD4_4.attach(SERVOMD4_4_PIN_SIG);
    servoMD4_4.write(servoMD4_4RestPosition);
    delay(100);
    servoMD4_4.detach();
    servoMD5_5.attach(SERVOMD5_5_PIN_SIG);
    servoMD5_5.write(servoMD5_5RestPosition);
    delay(100);
    servoMD5_5.detach();
    servoMD6_6.attach(SERVOMD6_6_PIN_SIG);
    servoMD6_6.write(servoMD6_6RestPosition);
    delay(100);
    servoMD6_6.detach();
    menuOption = menu();
    
}

// Main logic of your circuit. It defines the interaction between the components you selected. After setup, it runs over and over again, in an eternal loop.
void loop() 
{
    
    
    if(menuOption == '1') {
    // Standard Size - High Torque - Metal Gear Servo - MG995 #1 - Test Code
    // The servo will rotate to target position and back to resting position with an interval of 500 milliseconds (0.5 seconds) 
    servoMD1_1.attach(SERVOMD1_1_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    //servoMD1_1.write(servoMD1_1TargetPosition);  // 2. turns servo to target position. Modify target position by modifying the 'ServoTargetPosition' definition above.
    delay(500);                              // 3. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD1_1.write(servoMD1_1RestPosition);    // 4. turns servo back to rest position. Modify initial position by modifying the 'ServoRestPosition' definition above.
    delay(500);                              // 5. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD1_1.detach();                    // 6. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    }
    else if(menuOption == '2') {
    // Standard Size - High Torque - Metal Gear Servo - MG995 #2 - Test Code
    // The servo will rotate to target position and back to resting position with an interval of 500 milliseconds (0.5 seconds) 
    servoMD2_2.attach(SERVOMD2_2_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    //servoMD2_2.write(servoMD2_2TargetPosition);  // 2. turns servo to target position. Modify target position by modifying the 'ServoTargetPosition' definition above.
    delay(500);                              // 3. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD2_2.write(servoMD2_2RestPosition);    // 4. turns servo back to rest position. Modify initial position by modifying the 'ServoRestPosition' definition above.
    delay(500);                              // 5. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD2_2.detach();                    // 6. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    }
    else if(menuOption == '3') {
    // Standard Size - High Torque - Metal Gear Servo - MG995 #3 - Test Code
    // The servo will rotate to target position and back to resting position with an interval of 500 milliseconds (0.5 seconds) 
    servoMD3_3.attach(SERVOMD3_3_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    //servoMD3_3.write(servoMD3_3TargetPosition);  // 2. turns servo to target position. Modify target position by modifying the 'ServoTargetPosition' definition above.
    delay(500);                              // 3. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD3_3.write(servoMD3_3RestPosition);    // 4. turns servo back to rest position. Modify initial position by modifying the 'ServoRestPosition' definition above.
    delay(500);                              // 5. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD3_3.detach();                    // 6. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    }
    else if(menuOption == '4') {
    // Standard Size - High Torque - Metal Gear Servo - MG995 #4 - Test Code
    // The servo will rotate to target position and back to resting position with an interval of 500 milliseconds (0.5 seconds) 
    servoMD4_4.attach(SERVOMD4_4_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    //servoMD4_4.write(servoMD4_4TargetPosition);  // 2. turns servo to target position. Modify target position by modifying the 'ServoTargetPosition' definition above.
    delay(500);                              // 3. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD4_4.write(servoMD4_4RestPosition);    // 4. turns servo back to rest position. Modify initial position by modifying the 'ServoRestPosition' definition above.
    delay(500);                              // 5. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD4_4.detach();                    // 6. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    }
    else if(menuOption == '5') {
    // Standard Size - High Torque - Metal Gear Servo - MG995 #5 - Test Code
    // The servo will rotate to target position and back to resting position with an interval of 500 milliseconds (0.5 seconds) 
    servoMD5_5.attach(SERVOMD5_5_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    //servoMD5_5.write(servoMD5_5TargetPosition);  // 2. turns servo to target position. Modify target position by modifying the 'ServoTargetPosition' definition above.
    delay(500);                              // 3. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD5_5.write(servoMD5_5RestPosition);    // 4. turns servo back to rest position. Modify initial position by modifying the 'ServoRestPosition' definition above.
    delay(500);                              // 5. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD5_5.detach();                    // 6. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    }
    else if(menuOption == '6') {
    // Standard Size - High Torque - Metal Gear Servo - MG995 #6 - Test Code
    // The servo will rotate to target position and back to resting position with an interval of 500 milliseconds (0.5 seconds) 
    servoMD6_6.attach(SERVOMD6_6_PIN_SIG);         // 1. attach the servo to correct pin to control it.
    //servoMD6_6.write(servoMD6_6TargetPosition);  // 2. turns servo to target position. Modify target position by modifying the 'ServoTargetPosition' definition above.
    delay(500);                              // 3. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD6_6.write(servoMD6_6RestPosition);    // 4. turns servo back to rest position. Modify initial position by modifying the 'ServoRestPosition' definition above.
    delay(500);                              // 5. waits 500 milliseconds (0.5 sec). change the value in the brackets (500) for a longer or shorter delay in milliseconds.
    servoMD6_6.detach();                    // 6. release the servo to conserve power. When detached the servo will NOT hold it's position under stress.
    }
    
    if (millis() - time0 > timeout)
    {
        menuOption = menu();
    }
    
}



// Menu function for selecting the components to be tested
// Follow serial monitor for instrcutions
char menu()
{

    Serial.println(F("\nWhich component would you like to test?"));
    Serial.println(F("(1) Standard Size - High Torque - Metal Gear Servo - MG995 #1"));
    Serial.println(F("(2) Standard Size - High Torque - Metal Gear Servo - MG995 #2"));
    Serial.println(F("(3) Standard Size - High Torque - Metal Gear Servo - MG995 #3"));
    Serial.println(F("(4) Standard Size - High Torque - Metal Gear Servo - MG995 #4"));
    Serial.println(F("(5) Standard Size - High Torque - Metal Gear Servo - MG995 #5"));
    Serial.println(F("(6) Standard Size - High Torque - Metal Gear Servo - MG995 #6"));
    Serial.println(F("(menu) send anything else or press on board reset button\n"));
    while (!Serial.available());

    // Read data from serial monitor if received
    while (Serial.available()) 
    {
        char c = Serial.read();
        if (isAlphaNumeric(c)) 
        {   
            
            if(c == '1') 
          Serial.println(F("Now Testing Standard Size - High Torque - Metal Gear Servo - MG995 #1"));
        else if(c == '2') 
          Serial.println(F("Now Testing Standard Size - High Torque - Metal Gear Servo - MG995 #2"));
        else if(c == '3') 
          Serial.println(F("Now Testing Standard Size - High Torque - Metal Gear Servo - MG995 #3"));
        else if(c == '4') 
          Serial.println(F("Now Testing Standard Size - High Torque - Metal Gear Servo - MG995 #4"));
        else if(c == '5') 
          Serial.println(F("Now Testing Standard Size - High Torque - Metal Gear Servo - MG995 #5"));
        else if(c == '6') 
          Serial.println(F("Now Testing Standard Size - High Torque - Metal Gear Servo - MG995 #6"));
            else
            {
                Serial.println(F("illegal input!"));
                return 0;
            }
            time0 = millis();
            return c;
        }
    }
}
