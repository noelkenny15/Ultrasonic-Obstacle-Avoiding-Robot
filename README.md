# Ultrasonic-Obstacle-Avoiding-Robot

# Robot Movement and Obstacle Avoidance

This project controls a robot's movement and enables it to avoid obstacles using an ultrasonic sensor and a servo motor. The robot can move forward, backward, and turn based on the distance from obstacles detected in front, left, or right.

## Components Used

- **Servo Motor** - for rotating the ultrasonic sensor to check for obstacles on the left and right.
- **Ultrasonic Sensor (HC-SR04)** - measures the distance to obstacles.
- **Motors** - drive the robot forward, backward, or make turns.
- **Arduino** - the microcontroller controlling the entire robot.

## Pins

- **Motor Pins:**
  - Left Motor Forward: Pin 5
  - Left Motor Backward: Pin 4
  - Right Motor Forward: Pin 3
  - Right Motor Backward: Pin 2
- **Servo Motor Pin:** Pin 11
- **Ultrasonic Sensor Pins:**
  - Trigger Pin: Pin A3
  - Echo Pin: Pin A2

## Libraries Required

- **Servo** - Controls the servo motor to rotate the ultrasonic sensor.
- **NewPing** - Controls the ultrasonic sensor for distance measurements.

To install the necessary libraries, go to **Sketch > Include Library > Manage Libraries...** and search for **Servo** and **NewPing**.

## Description

This project enables a simple robot to navigate through an environment by detecting obstacles in its path using the ultrasonic sensor. It will:

1. **Move Forward:** When there is no obstacle in front of it.
2. **Stop:** When an obstacle is detected within 20 cm.
3. **Move Backward:** If an obstacle is detected.
4. **Turn Right or Left:** The robot will turn based on which direction has a clearer path.

The robot uses a **servo motor** to rotate the ultrasonic sensor and check for obstacles to the left and right. The movement is controlled based on the distance from obstacles detected by the sensor.

## How It Works

1. The **ultrasonic sensor** measures the distance to obstacles in front of the robot.
2. If an obstacle is too close (less than 20 cm), the robot stops, moves backward, and checks both the left and right sides.
3. The robot will then turn in the direction with the least obstacle distance.
4. If no obstacles are detected, the robot moves forward.

## Setup

### 1. Connect the components to the Arduino board:
   - Connect the **motor pins** (LeftMotorForward, LeftMotorBackward, RightMotorForward, RightMotorBackward) to the corresponding motor driver.
   - Connect the **servo motor** to pin 11.
   - Connect the **ultrasonic sensor**'s **trig** pin to A3 and **echo** pin to A2.

### 2. Upload the Code:
   - Open the Arduino IDE.
   - Paste the provided code into the IDE.
   - Select the correct board and port.
   - Upload the code to the Arduino.
