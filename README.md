# STRIKE FORCE — Impact Strength Measurement System

## Project Overview

Strike Force is a low-cost impact strength measurement system designed to measure the intensity of a physical strike. The system uses five piezoelectric sensors mounted on an impact surface to detect vibrations produced when the surface is hit.

The sensors convert mechanical vibrations into electrical signals. These signals are read by an Arduino Uno through its analog input pins A0–A4. The collected sensor values are processed to determine an overall impact response.

The system provides a simple and measurable way to compare the strength of different physical impacts.

## Objectives

- Detect physical impacts using piezoelectric sensors.
- Collect impact data from multiple sensing points.
- Process the sensor signals using an Arduino Uno.
- Calculate an average sensor response.
- Convert physical impact into measurable digital data.
- Develop a low-cost and interactive impact measurement system.

## Working Principle

When the impact surface is struck, the piezoelectric sensors experience mechanical deformation and generate electrical signals.

Five sensors are connected to the analog inputs of the Arduino Uno:

- Sensor 1 → A0
- Sensor 2 → A1
- Sensor 3 → A2
- Sensor 4 → A3
- Sensor 5 → A4

The Arduino reads the five analog values and calculates their mean.

Mean Response = (S1 + S2 + S3 + S4 + S5) / 5

This value represents the overall response of the sensor array to the impact.

## Hardware

- Arduino Uno
- 5 × Piezoelectric sensors
- 5 × 1 MΩ resistors
- 5 × 0.1 µF capacitors
- 5 × 1N4148 diodes
- 5 × Zener diodes
- Breadboard
- Jumper wires
- Impact surface/plate
- USB cable

## Signal Conditioning

Each piezoelectric sensor is connected to a signal-conditioning network consisting of a resistor, capacitor, diode and Zener diode.

The conditioning circuit helps stabilize the generated signal and provides protection for the Arduino input.

## Software

The project is programmed using the Arduino IDE.

The Arduino reads the five analog inputs and processes the readings using the microcontroller.

## Applications

Strike Force can be used for:

- Sports training
- Interactive games
- Impact demonstrations
- Educational experiments
- Basic impact testing
- Robotics and sensor demonstrations

## Future Improvements

Possible future improvements include:

- Wireless data transmission
- Graphical user interface
- Real-time impact visualization
- Data logging
- Calibration against known forces
- Higher-speed sampling
- Display of individual sensor responses
- Development of a dedicated PCB

## Project Team

Vaishnavi G
Prajwal Dhannur
Siri S Bharadwaj

## Repository Contents

- `Arduino_Code/` — Arduino source code
- `Circuit/` — Circuit diagram and wiring information
- `Hardware/` — Component information
- `Testing/` — Testing data and results
- `Images/` — Project photographs
- `Documentation/` — Project report
