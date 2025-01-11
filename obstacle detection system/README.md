# Obstacle Detection System using Arduino

## 🛠️ **Components Required**

- **Arduino UNO**
- **Ultrasonic Sensor (HC-SR04)**
- **Buzzer**
- **LED (Optional)**
- **Jumper Wires**
- **Breadboard**

## ⚙️ **System Overview**

This project demonstrates a simple obstacle detection system using Arduino and an ultrasonic sensor (HC-SR04). The system is designed to detect the distance of objects in front of the sensor and alert the user if the object is too close.

The obstacle detection system uses the ultrasonic sensor to measure the distance between the sensor and any obstacle in its path. If the distance is below a specified threshold, the system triggers an alert (either with a buzzer, LED, or both).

## 🚦 **Features**

- **Distance Measurement**: The ultrasonic sensor measures the distance from an object.
- **Alert Mechanism**: When the distance is below a specified threshold, the system triggers an alert (buzzer or LED).
- **Real-Time Feedback**: The system provides real-time feedback to indicate whether an object is within the detection range.

## 🕹️** Circuit Diagram**

The circuit diagram shows the basic setup
![EXP 07_LAB MANUAL_page2_image](https://github.com/user-attachments/assets/e27ff499-ecd6-4807-a991-28e859389314)



## ⚡ **Steps to Run**

### 1. Hardware Setup

- Connect the **HC-SR04 ultrasonic sensor** to the Arduino:
  - **VCC** to **5V**
  - **GND** to **GND**
  - **Trig** to **Pin 9**
  - **Echo** to **Pin 10**

- If you're using a **Buzzer**, connect it to **Pin 12**.
- If you're using an **LED**, connect it to **Pin 13** (optional).

### 2. Upload Code

- Upload the provided Arduino code to your Arduino UNO board using the **Arduino IDE**.

### 3. Testing

- Power on the Arduino.
- The system will continuously monitor the distance.
- When an object comes within the detection range, the buzzer will sound (or the LED will light up).
- Adjust the threshold distance in the code to fine-tune the detection range.

## 📝 **Code Overview**

The code initializes the ultrasonic sensor and sets up the alert system. It continuously measures the distance and triggers the buzzer/LED when the distance goes below the specified threshold.

**Example threshold distance**: If an object is detected within 10 cm, the buzzer or LED will be triggered.

## 🤖 **Conclusion**

This project serves as a simple demonstration of obstacle detection using an ultrasonic sensor and Arduino. It can be expanded to include additional sensors or features, such as controlling motors for a robotic car or integrating with a larger security system.

## 🛡️ **License**

This project is open-source and available for modification. Feel free to clone and customize it for your own purposes!




