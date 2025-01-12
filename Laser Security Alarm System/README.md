# 🔒 Laser Security Alarm System

The **Laser Security Alarm System** is an Arduino-based project designed to enhance security by detecting intrusions using a laser beam and a photoresistor. When the laser beam is interrupted, an alarm is triggered, ensuring effective intrusion detection.

---

## 🚀 **Features**

- **Intrusion Detection**:
  - Uses a laser and photoresistor to detect interruptions.
- **Audible Alarm**:
  - Triggers a buzzer when the laser beam is interrupted.
- **Scalable Design**:
  - Can be integrated into larger security systems.
- **Low Power Consumption**:
  - Efficient and suitable for continuous use.

---

## 🛠 **Components Required**

1. **Arduino UNO Board**
2. **LASER Diode Module (KY-008)**
3. **Buzzer**
4. **LDR (Photoresistor)**
5. **Resistors (10k Ohm)**
6. **Push Button Switch**
7. **Breadboard**
8. **Jumper Wires**

---

## 🔧 **Circuit Diagram**

The circuit diagram shows the connections between the laser module, photoresistor, buzzer, and the Arduino. Connect the components as follows:

1. **Laser Diode Module (KY-008)**:
   - VCC → 5V
   - GND → GND
2. **Photoresistor (LDR)**:
   - One pin to **Analog Pin A0** via a 10k Ohm resistor.
   - The other pin to **5V**.
3. **Buzzer**:
   - Positive terminal → Digital Pin 9
   - Negative terminal → GND
4. **Push Button Switch**:
   - Connect one side to Digital Pin 8.
   - The other side to **GND** via a resistor.

---

## 🖥 **How to Run the Project**

### **Steps**:

1. **Hardware Setup**:
   - Connect the components as per the circuit diagram.
   - Align the laser beam to point directly at the photoresistor (LDR).
2. **Upload the Code**:
   - Open the provided code in the Arduino IDE.
   - Select the correct board and COM port under **Tools**.
   - Click **Upload** to upload the code to the Arduino board.
3. **Testing**:
   - Power the Arduino board.
   - Interrupt the laser beam with an object to trigger the buzzer.
   - Use the push button switch to reset or stop the alarm as configured.

---

## 📂 **Project Structure**

- **/Code**: Contains the Arduino sketch (`.ino` file).
- **/Images**: Includes circuit diagram and project photos (if applicable).

---

## 📝 **Conclusion**

The **Laser Security Alarm System** is a simple yet effective way to enhance security. It can be customized further by adding features like GSM alerts, Wi-Fi connectivity, or integration into a smart home system.

---

## 📜 **License**

This project is open-source and available for modification. Feel free to clone, modify, and use it for your own applications!
