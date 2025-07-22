# Distance-Based DC Motor Speed Control (Arduino + HC-SR04 + TIP120)

This Arduino project controls the speed of a DC motor based on the distance measured by an HC-SR04 ultrasonic sensor. A TIP120 transistor is used to handle the motor current, and PWM signals control the speed. The farther the object, the faster the motor spins.

## Components Used

- Arduino UNO
- HC-SR04 Ultrasonic Sensor
- DC Motor (3–9V)
- TIP120 NPN Transistor
- 2 × 330Ω Resistors (connected in parallel)
- 1N4007 Diode
- External Power Supply (9V battery or adapter)
- Breadboard
- Jumper Wires

## How It Works

1. The ultrasonic sensor sends out sound pulses and receives the echo.
2. The distance is calculated based on the time it takes for the echo to return.
3. The Arduino maps this distance to a PWM signal between 1 and 60.
4. The TIP120 transistor receives the PWM signal and controls the power going to the motor.
5. As the object moves closer, the motor slows down. As it moves away, the motor speeds up.

## PWM Range

- Minimum Distance (5 cm): PWM = 1
- Maximum Distance (50 cm): PWM = 60

These values can be adjusted in the code for different motor behavior.

## Files Included

- `motor_distance_control.ino` – Main Arduino sketch
- `images/circuit_diagram.png` – Fritzing circuit diagram
- `images/project_photo.jpg` – Real photo of the assembled project
- `LICENSE` – MIT License
- `README.md` – This documentation

## License

This project is licensed under the MIT License. See the LICENSE file for details.
