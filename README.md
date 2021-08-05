Introduction: 
In this task, the aim is to learn about brushless motor, and how to control it using motor driver QS 909 and an Arduino.

Circuit:
The attached picture shows the connection of the circuit, connect VR and ZF to the digital ports of the Arduino, and connect common ground between Arduino and the driver, and connect the driver to the motor as shown, and connect battery to the circuit as shown.

Code:
Firstly, I defined which ports I used for VR (speed) and zf (direction), then in the setup, I set both speed and direction as outputs, then in the loop I make the motor goes in the clockwise direction by using digital write with a speed of 50, and after 5 seconds goes to the other direction with different speed.
