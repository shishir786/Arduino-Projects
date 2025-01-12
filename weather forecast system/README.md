# 🌤️ Weather Forecast System

The **Weather Forecast System** is an Arduino-based project that collects and displays weather-related data such as temperature, humidity, and atmospheric pressure. This project uses sensors and an Arduino microcontroller to create a compact and efficient weather monitoring system.

---

## 🚀 **Features**

- **Real-Time Weather Monitoring**:
  - Displays temperature, humidity, and atmospheric pressure.
- **User-Friendly Display**:
  - Data is displayed on an OLED screen for clear and compact visualization.
- **Compact Design**:
  - Efficient hardware integration for portable weather tracking.
- **Scalability**:
  - Can be expanded with additional sensors (e.g., rain gauge, wind speed).

---

## 🛠 **Components List**

- **Arduino Uno Board**
- **BMP180 / MPL115A Sensor** (for atmospheric pressure)
- **0.96-inch OLED 128x64 Display**
- **Breadboard and Jump Wires**

---

## 🔧 **Circuit Diagram**

The circuit diagram demonstrates the connections between the Arduino, sensors, and the OLED display. Connect the components as follows:  
![alt text](<EXP 08_LAB MANUAL_page4_image.png>)

1. **BMP180 / MPL115A Sensor**:
   - SDA → A4
   - SCL → A5
   - VCC → 5V
   - GND → GND
2. **0.96-inch OLED Display**:
   - SDA → A4
   - SCL → A5
   - VCC → 5V
   - GND → GND

---

## 🖥 **How to Run the Project**

### **Steps**:

1. **Hardware Setup**:
   - Connect the components as per the circuit diagram.
   - Secure the connections on the breadboard.
2. **Upload the Code**:
   - Open the provided code in the Arduino IDE.
   - Install required libraries for BMP180/MPL115A and OLED (e.g., **Adafruit_BMP085**, **Adafruit_GFX**, and **Adafruit_SSD1306**).
   - Select the correct board and COM port under **Tools**.
   - Click **Upload** to upload the code to the Arduino board.
3. **Testing**:
   - Power the Arduino board.
   - View real-time weather data on the OLED display.

---

## 📂 **Project Structure**

- **/Code**: Contains the Arduino sketch (`.ino` file).
- **/Images**: Includes circuit diagram and project photos (if applicable).

---

## 📝 **Conclusion**

The **Weather Forecast System** provides a compact and easy-to-use solution for monitoring real-time weather data. This project can be expanded with additional sensors or integrated into IoT platforms for remote monitoring.

---

## 📜 **License**

This project is open-source and available for modification. Feel free to clone, modify, and use it for your own applications!
