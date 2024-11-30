#include <ESP32Servo.h>

// Define servo objects
Servo servo1;  // For up/down
Servo servo2;  // For left/right

// Joystick pins
const int VRx = 34; // X-axis pin
const int VRy = 35; // Y-axis pin

// Servo pins
const int servo1Pin = 27; // Up/Down servo
const int servo2Pin = 14; // Left/Right servo

void setup() {
  // Initialize servos
  servo1.attach(servo1Pin);
  servo2.attach(servo2Pin);
  
  // Set servos to initial position
  servo1.write(90); // Middle position
  servo2.write(90); // Middle position
  
  // Initialize serial monitor (optional for debugging)
  Serial.begin(115200);
}

void loop() {
  // Read joystick values
  int xValue = analogRead(VRx); // X-axis
  int yValue = analogRead(VRy); // Y-axis

  // Map joystick values to servo angles
  int servo1Angle = map(yValue, 0, 4095, 0, 180); // Y-axis controls servo1
  int servo2Angle = map(xValue, 0, 4095, 0, 180); // X-axis controls servo2

  // Move servos to the mapped angles
  servo1.write(servo1Angle);
  servo2.write(servo2Angle);

  // Print joystick and servo values for debugging (optional)
  Serial.print("X: "); Serial.print(xValue);
  Serial.print(", Y: "); Serial.print(yValue);
  Serial.print(", Servo1: "); Serial.print(servo1Angle);
  Serial.print(", Servo2: "); Serial.println(servo2Angle);

  delay(15); // Small delay for smooth movement
}
