# Strike Force Circuit Description

## Sensor Connections

Five piezoelectric sensors are used in the system.

| Sensor | Arduino Pin |
|--------|-------------|
| Sensor 1 | A0 |
| Sensor 2 | A1 |
| Sensor 3 | A2 |
| Sensor 4 | A3 |
| Sensor 5 | A4 |

All sensor conditioning circuits share the Arduino ground.

## Signal Conditioning

Each sensor uses:

- 1 × 1N4148 diode
- 1 × Zener diode
- 1 × 1 MΩ resistor
- 1 × 0.1 µF capacitor

The piezoelectric sensor generates a voltage when subjected to mechanical impact. The generated signal is passed through the conditioning network before being connected to the Arduino analog input.

## Arduino Connections

Arduino Uno:

A0 → Sensor 1 signal  
A1 → Sensor 2 signal  
A2 → Sensor 3 signal  
A3 → Sensor 4 signal  
A4 → Sensor 5 signal  

Arduino GND → Circuit ground

Arduino 5V → Breadboard supply rail
