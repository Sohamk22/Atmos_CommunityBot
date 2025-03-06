
#include <AFMotor.h>


AF_DCMotor motor1(1, MOTOR12_1KHZ); 
AF_DCMotor motor2(2, MOTOR12_1KHZ); 
AF_DCMotor motor3(3, MOTOR34_1KHZ); 
AF_DCMotor motor4(4, MOTOR34_1KHZ); 

void setup() {
  
  Serial.begin(9600);
  
 
  motor1.setSpeed(0);
  motor2.setSpeed(0);
  motor3.setSpeed(0);
  motor4.setSpeed(0);
}

void loop() {
 
  motor1.setSpeed(150);  
  motor1.run(BACKWARD);   
  
  motor2.setSpeed(150);  
  motor2.run(FORWARD);  
  
  motor3.setSpeed(150);  
  motor3.run(BACKWARD);  
  
  motor4.setSpeed(150);  
  motor4.run(FORWARD);  
  
  
  delay(5000);
  
  
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  
  
  delay(2000);
}
