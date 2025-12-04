/*
  Face Tracking Servo Controller
  Author: Benayas Wondwosen (Benu)
  Description:
    Smooth pan–tilt servo controller for real-time face tracking.
    Receives angle values from Python through Serial as: "X,Y"
*/

#include <Servo.h>

Servo servoX;
Servo servoY;

int currentX = 90;
int currentY = 90;

void setup() {
  servoX.attach(9);   // X-axis servo pin
  servoY.attach(10);  // Y-axis servo pin

  servoX.write(currentX);
  servoY.write(currentY);

  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');
    int commaIndex = data.indexOf(',');

    if (commaIndex != -1) {
      int targetX = data.substring(0, commaIndex).toInt();
      int targetY = data.substring(commaIndex + 1).toInt();

      targetX = constrain(targetX, 0, 180);
      targetY = constrain(targetY, 0, 180);

      // Smooth motion (reduces shaking)
      currentX = currentX * 0.85 + targetX * 0.15;
      currentY = currentY * 0.85 + targetY * 0.15;

      servoX.write(currentX);
      servoY.write(currentY);
    }
  }
}
