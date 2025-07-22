
# Distance-Based DC Motor Speed Control (Arduino + HC-SR04 + TIP120)

This project uses an HC-SR04 ultrasonic sensor to measure distance and control a DC motor's speed using PWM with an Arduino Uno and a TIP120 transistor.

## Components
- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- DC Motor (3–9V)
- TIP120 NPN Transistor
- 2 × 330Ω Resistors (connected in parallel)
- 1N4007 Diode
- External power supply (9V battery or adapter)
- Breadboard
- Jumper wires

## Circuit Diagram
See the circuit diagram in the `images/` folder.

## How it Works
The ultrasonic sensor measures the distance of an object in front of it. The Arduino reads this distance and adjusts the speed of the DC motor accordingly. The farther the object is, the faster the motor runs. A TIP120 transistor is used to handle higher current for the motor through PWM.

## Code
The Arduino code can be found in the `motor_distance_control.ino` file.

## PWM Range
- At close range (5 cm): PWM = 1
- At far range (50 cm): PWM = 60

## License
This project is licensed under the MIT License.
