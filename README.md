---

# 🛡️ **Face Tracking Pan–Tilt System**

### Real-Time Head Tracking with Python, OpenCV, MediaPipe & Arduino

**Author:** Benayas Wondwosen (Benu)
**Company:** Nafiyas Solution

![Project Banner](https://img.shields.io/badge/Face_Tracking-Pan-Tilt-blue?style=for-the-badge)
![Python](https://img.shields.io/badge/Python-3.11-green?style=flat-square)
![OpenCV](https://img.shields.io/badge/OpenCV-4.8-blue?style=flat-square)
![Arduino](https://img.shields.io/badge/Arduino-Uno-red?style=flat-square)
![MediaPipe](https://img.shields.io/badge/MediaPipe-0.10-orange?style=flat-square)

---

## 📌 **Project Overview**

The **Face Tracking Pan–Tilt System** is a **smart, real-time servo system** that follows a person’s face using computer vision.

It combines:

* **Python + OpenCV** – for camera capture and frame processing
* **MediaPipe Face Mesh** – for accurate face landmark detection
* **Arduino** – to control servos (X & Y axes)

**Applications:**

* Robotics projects
* Smart surveillance cameras
* Jarvis-style interactive displays
* Educational purposes in embedded systems and AI

---

## ⚡ **Key Features**

* ✅ Smooth real-time head tracking
* ✅ Nose-centered alignment for precision
* ✅ Fast jump response for quick movements
* ✅ Adjustable gain and smoothing factors
* ✅ Full 0°–180° servo range
* ✅ Modular Python-Arduino integration
* ✅ Lightweight and easy to extend

---

## 🧰 **Hardware Requirements**

* Arduino Uno / Nano
* 2x SG90 / MG90S servo motors
* Pan–tilt servo bracket
* USB cable
* Computer with Python 3.x and webcam

---

## 🔌 **Arduino Connections**

| Component      | Arduino Pin |
| -------------- | ----------- |
| Servo X (pan)  | 9           |
| Servo Y (tilt) | 10          |
| GND            | GND         |
| +5V            | 5V          |

---

## 🛠️ **Software Requirements**

* Python 3.x
* Libraries: OpenCV, MediaPipe, PySerial, NumPy

Install dependencies:

```bash
pip install opencv-python mediapipe pyserial numpy
```

Or:

```bash
pip install -r requirements.txt
```

---

## ▶️ **Usage Instructions**

1. Upload `servo_controller.ino` to Arduino.
2. Connect Arduino to your PC via USB.
3. Run Python script:

```bash
python python/face_tracker.py
```

4. The servos will follow your face in real time.
5. Press `q` to exit the program.

---

## 🧠 **How It Works**

1. Webcam captures frame
2. MediaPipe detects face landmarks
3. Nose tip (landmark index 1) tracked
4. Error from screen center calculated
5. Error converted to servo angles (0–180°)
6. Python sends angles via Serial to Arduino
7. Arduino moves the servos smoothly

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

## 👨‍💻 **Author & Company**

**Benayas Wondwosen (Benu)**
Embedded Systems | Robotics | AI & Python

**Nafiyas Solution** – Smart Automation & Robotics Solutions

---

## 🤖 **Project Assistant**

**Nafkot (AI)** – Assisted in code generation, smoothing logic, and professional documentation.

---

## 📜 **License**

This project is **open-source** for learning, research, and personal use.
Commercial use requires permission from **Nafiyas Solution**.

---

## 💡 **Future Enhancements**

* Multi-face tracking
* Voice control integration
* Web interface for remote servo control
* IoT-enabled smart automation

---
