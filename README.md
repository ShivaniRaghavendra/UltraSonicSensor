# UltraSonicSensor
# Ultrasonic Sensor-Based Distance Measurement with LED Indicator

This project utilizes an **HC-SR04 ultrasonic sensor** with an **ESP32** to measure distance. If the detected distance is greater than **20 cm**, an **LED is turned ON**; otherwise, it remains OFF.

## Features
- Measures **distance** using an ultrasonic sensor.
- Turns on an **LED** if the distance is **greater than 20 cm**.
- Displays real-time distance values on the **Serial Monitor**.

## Components Used
- **ESP32**
- **HC-SR04 Ultrasonic Sensor**
- **LED** (connected to GPIO 25)
- **Resistor** (if required for LED)

## Circuit Connections
| Component | ESP32 Pin |
|-----------|-----------|
| Ultrasonic Sensor (Trig) | GPIO 5 |
| Ultrasonic Sensor (Echo) | GPIO 4 |
| LED | GPIO 25 |

## Installation & Setup
### 1. Upload the Code
1. Open the **Arduino IDE**.
2. Copy and paste the provided code.
3. Connect the ESP32 and upload the sketch.

### 2. Open Serial Monitor
- Set baud rate to **9600**.
- Observe distance values and LED status in real-time.

## How It Works
1. The **HC-SR04 sensor** sends an ultrasonic pulse via the **Trig** pin.
2. The **Echo** pin receives the reflected pulse, and the duration is measured.
3. The distance is calculated using the formula:
   
   	Distance (cm) = (Duration * 0.034) / 2

4. If the distance is **greater than 20 cm**, the **LED turns ON**.
5. Otherwise, the **LED remains OFF**.
6. The measured distance is displayed on the **Serial Monitor**.

## Example Output
```
Distance: 25 cm
LED is ON
Distance: 15 cm
LED is OFF
```

## Future Enhancements
- Add a **buzzer** for proximity alerts.
- Integrate with a **display (OLED/LCD)** for visual output.
- Use **WiFi/Bluetooth** for remote monitoring.

## License
This project is open-source under the MIT License.


