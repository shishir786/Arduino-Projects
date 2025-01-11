# Traffic Control System

This project demonstrates a simple traffic control system using Arduino. The system is designed to control the traffic lights at an intersection using LEDs. The traffic lights alternate between red, green, and yellow based on predefined timings, mimicking a real-world traffic light system.

## Components Required

- **Arduino UNO**: The microcontroller used to control the system.
- **LEDs** (3 per traffic light): Red, Yellow, Green LEDs for controlling traffic.
- **Resistors (220Ω)**: For current limiting to protect the LEDs.
- **Push Button**: To simulate pedestrian button (optional).
- **Breadboard**: For connecting components.
- **Jumper Wires**: For connections.

## Circuit Diagram

The circuit diagram shows the basic setup for controlling the traffic lights using LEDs. 
![EXP 01_LAB MANUAL_page2_image](https://github.com/user-attachments/assets/5c24f32d-1ae0-44c6-8752-528fffe85fd3)


### Pin Connections:

- **Traffic Light**:
  - **Red LED**: Pin 8
  - **Yellow LED**: Pin 10
  - **Green LED**: Pin 12



## Features

- **Traffic Light Cycling**: The red, yellow, and green LEDs cycle in a predefined manner for two sets of traffic lights (North-South and East-West).
- **Pedestrian Button (Optional)**: Can be added to allow pedestrian crossings by triggering a green light on the pedestrian side.

## Steps to Run:

### Hardware Setup:
1. Connect the LEDs to the corresponding pins on the Arduino (Pins 2, 3, 4 for the North-South traffic light, Pins 5, 6, 7 for the East-West traffic light).
2. If you're using a pedestrian button, connect it to Pin 8.

### Upload Code:
1. Upload the provided code to the Arduino using the Arduino IDE.

### Testing:
1. Power the Arduino and observe the LEDs. The traffic lights will cycle between red, yellow, and green for both directions.
2. If the pedestrian button is used, it can simulate the action of pedestrian crossing (you can extend this logic as per your requirement).

## Conclusion

This project provides a simple yet effective traffic control system using Arduino. It can be expanded to include features like pedestrian lights, sensor-based vehicle detection, or even a real-time clock for traffic light management.

## License

This project is open-source and available for modification. Feel free to clone and customize it for your own purposes!
