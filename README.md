
---

# 🛰️ **Face Tracking Pan–Tilt System**

**Author:** Benayas Wondwosen (Benu)
**Company:** Nafiyas Solution – Smart Automation & Robotics

![Project Banner](https://img.shields.io/badge/Face_Tracking-Pan-Tilt-blue?style=for-the-badge)
![Python](https://img.shields.io/badge/Python-3.11-green?style=flat-square)
![OpenCV](https://img.shields.io/badge/OpenCV-4.8-blue?style=flat-square)
![Arduino](https://img.shields.io/badge/Arduino-Uno-red?style=flat-square)
![MediaPipe](https://img.shields.io/badge/MediaPipe-0.10-orange?style=flat-square)

---

## 💡 **About the Project**

The **Face Tracking Pan–Tilt System** is a **cutting-edge AI robotics project** that moves servos in real time to follow a person’s face.

It combines:

* **Computer Vision:** Python + OpenCV captures frames
* **AI Detection:** MediaPipe Face Mesh accurately detects face landmarks
* **Hardware Control:** Arduino drives X/Y servo motors for smooth pan and tilt

**Applications:**

* Smart cameras & surveillance
* Educational robotics
* Jarvis-style interactive assistants
* Personal & research projects

---

## 🏆 **Features**

* 🎯 Real-time face tracking
* 🔄 Smooth servo movement with adjustable smoothing factor
* ⚡ Fast jump response for quick head movement
* ✅ Nose-centered tracking for precision
* 🖥️ Lightweight and easy to run
* 💻 Modular Python-Arduino design

---

## 🛠️ **Hardware Used**

* Arduino Uno / Nano
* 2x SG90 / MG90S servo motors
* Pan–tilt bracket
* USB cable
* Computer with Python 3.x + webcam

---

## 🔌 **Arduino Connections**

| Component      | Arduino Pin |
| -------------- | ----------- |
| Servo X (Pan)  | 9           |
| Servo Y (Tilt) | 10          |
| GND            | GND         |
| +5V            | 5V          |

---

## 🧰 **Software Requirements**

* Python 3.x
* Libraries: OpenCV, MediaPipe, PySerial, NumPy

Install dependencies:

```bash
pip install opencv-python mediapipe pyserial numpy
```

Or via:

```bash
pip install -r requirements.txt
```

---

## ▶️ **How to Run**

1. Upload `servo_controller.ino` to Arduino
2. Connect Arduino to PC via USB
3. Run Python script:

```bash
python python/face_tracker.py
```

4. Move your head — servos will follow smoothly
5. Press `q` to quit

---

## 🧠 **How It Works**

1. Webcam captures video frames
2. MediaPipe detects facial landmarks
3. Nose tip is tracked (landmark 1)
4. Error from screen center is calculated
5. Error is converted to servo angles (0–180°)
6. Python sends angles via Serial to Arduino
7. Arduino moves servos smoothly in response

---

## 📂 **Folder Structure**

```
face-tracking-pan-tilt/
│
├── README.md
├── requirements.txt
│
├── python/
│   └── face_tracker.py
│
└── arduino/
    └── servo_controller.ino
```

---

## 👨‍💻 **About Me**

**Benayas Wondwosen (Benu)** – Embedded Systems & Robotics Developer
Founder of **Nafiyas Solution**, specializing in:

* Smart automation systems
* Robotics & AI projects
* IoT device integration
* Educational technology

I design and implement **innovative robotics solutions** combining hardware and software for real-world applications.

---

## 🤖 **Project Assistant**

**Nafkot (AI)** – Helped with **code generation, smooth servo logic, and documentation**.

---

## 📜 **License**

Open-source for learning, research, and personal projects.
Commercial use requires permission from **Nafiyas Solution**.

---
