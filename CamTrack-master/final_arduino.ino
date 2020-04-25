// Arduino Code
#include <Servo.h>
#include <HardwareSerial.h>
 
const int servoPin1 = 9;
const int servoPin2 = 10;
 
Servo servo1;
Servo servo2;

int lastX = 0;
int lastY = 0;
 
void setup() {
  Serial.begin(9600);
  servo1.attach(servoPin1);
  servo2.attach(servoPin2);
  servo3.attach(servoPin3);
}
 
 
void loop() {
  char str[2];
  if(Serial.available() > 0) {
    char data = Serial.read();
    int dist = Serial.read();
    Serial.print(data);
      if (str == "f") {
        return;
    }
  }

  

  if (data == 'n') {
    for (int i = last; i < dist; i++) {
      servo1.write(angle);
      delay(60);
    }
    lastY = dist;
  } else if (data == 's') {
    for (int i = dist; i >= last; i--) {
      servo1.write(angle);
      delay(60);
    }
    lastY = dist;
  } else if (data == 'e') {
    for (int i = last; i < dist; i++) {
      servo2.write(angle);
      delay(60);
    }
    lastX = dist;
  } else if (data == 'w') {
    for (int i = dist; i >= last; i--) {
      servo2.write(angle);
      delay(60);
    }
    lastX = dist;
  }
}
