# 🎮 Simple Joystick Controller

## 🚀 Project Overview
This project, created by *Muditha Sasanka* and *Nayanagith Edirisinha*, demonstrates how to control a servo motor using a joystick and an ESP32 microcontroller. The project allows precise servo control based on the joystick's movement, providing an intuitive way to interact with hardware systems.

---

## 🌟 Features
- *Joystick Control*: Smooth and responsive servo control.
- *ESP32 Integration*: Lightweight and efficient implementation.
- *User-Friendly Design*: Easy to set up and operate.
- *Customizable*: Adjust servo movements and joystick configurations.

---

## 🔧 Hardware Requirements
- *ESP32 Development Board*
- *Servo Motor*
- *Joystick Module*
- Jumper Wires
- External 5V Power Supply (if required)

---

## 🛠 Connections
| Component         | ESP32 Pin |
|-------------------|-----------|
| Joystick X-Axis   | GPIO 34   |
| Joystick Y-Axis   | GPIO 35   |
| Joystick Button   | GPIO 32   |
| Servo Motor Signal| GPIO 27   |
| VCC (Joystick & Servo) | 5V   |
| GND (Joystick & Servo) | GND  |

---

## 📜 Code Example
cpp
#include <ESP32Servo.h>

Servo servo;
const int servoPin = 27;
const int joyXPin = 34;
const int joyYPin = 35;

void setup() {
  servo.attach(servoPin);
  pinMode(joyXPin, INPUT);
  Serial.begin(115200);
}

void loop() {
  int joyXValue = analogRead(joyXPin);
  int servoAngle = map(joyXValue, 0, 4095, 0, 180);
  servo.write(servoAngle);
  delay(15);
}


---

## 🌐 GitHub Repository
📂 [GitHub Project Repository](https://github.com/mudithasasanka7/Simple-Joystick-Controller)

---

## 🎥 Working Video
📺 Watch the project in action: [LinkedIn Video Post](https://www.linkedin.com/posts/muditha-sasanka-kodikara-b5473a322_robot-arm-controlled-via-joystick-this-activity-7268726784932687872-UxZH?utm_source=share&utm_medium=member_ios)

---

## 📄 How to Use
1. Connect the joystick and servo motor to the ESP32 as per the table above.
2. Upload the code to the ESP32 using Arduino IDE.
3. Power the ESP32 and move the joystick to control the servo motor.

---

## 📢 LinkedIn Post
🚀 *Excited to share our project: Simple Joystick Controller!*

🎮 With this setup, you can:
- Easily control a servo motor using a joystick.
- Use an ESP32 microcontroller for lightweight and efficient operation.

💡 *Project by:* Muditha Sasanka & Nayanagith Edirisinha  
🔗 *Check out the working video*: [Watch on LinkedIn](https://www.linkedin.com/posts/your-post-link)  
💻 *Code and details*: [GitHub Repository](https://github.com/mudithasasanka7/Simple-Joystick-Controller)  

Feedback and suggestions are welcome! 🌟

#ESP32 #IoT #JoystickController #Arduino #GitHub #LinkedIn
