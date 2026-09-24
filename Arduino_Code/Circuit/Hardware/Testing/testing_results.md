# Testing and Results

## Objective

The objective of testing was to verify that the five piezoelectric sensors could detect physical impacts and provide measurable analog responses.

## Test Procedure

1. Connect the five sensors to A0–A4.
2. Power the Arduino Uno.
3. Open the Arduino Serial Monitor.
4. Apply an impact to the sensing surface.
5. Record the sensor responses.
6. Calculate the average response.
7. Repeat the test with different impact intensities.

## Data Processing

The five sensor values are averaged using:

Mean Response = (S1 + S2 + S3 + S4 + S5) / 5

A higher sensor response generally indicates a stronger detected vibration.

## Observations

The piezoelectric sensors respond to mechanical impacts by producing electrical signals. The magnitude of the measured response varies according to the intensity and location of the impact.

The five-sensor arrangement allows the system to collect information from multiple points on the impact surface.

## Future Testing

Further testing can be performed using controlled impacts to establish a calibration relationship between sensor response and physical force.
