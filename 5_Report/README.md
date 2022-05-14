## Abstract
Today's car wipers work on the principle of manual switching. The traditional wiper system requires driver constant attention in adjusting the wiper speed. Traditional windshield wiper speed constantly varies according to time and vehicle’s speed. This does not only require driver’s attention, but also, causes a certain level of discomfort to the driver and serves as a source of distraction which increases the risk of accidents. To offer comfort to the driver and essentially reduce the risk of accidents, an automatic rain sensing device has become a necessity, as they work to minimize the time the driver must take his/her hands off the wheel. Automatic rain sensing wiper system detects rain and starts automatically and stops when the rain stops.

## Working
In this project assume that the automobile as the microcontroller and the wiper system is represented by a series of glowing LED's. The RED LED is considered for the ACC position. Once the push button is pressed for 2 seconds, the RED LED glows continuously until the engine stops, indicating the engine condition to be turned ON. The other three BLUE, GREEN, and ORANGE LED's come on one at a time with the set frequency. The frequency changes with each alternate key press, and there are three frequency levels (1,4,8 Hz). The LED glow pattern ends on the fourth press, and the wiper action begins with the next press. If the push button is held down for 2 seconds, the RED LED turns OFF and the pattern ends, returning it to its default position, indicating that the engine has been shut OFF.

## Introduction
Today's car wipers work on the principle of manual switching. The traditional wiper system requires driver constant attention in adjusting the wiper speed. Traditional windshield wiper speed constantly varies according to time and vehicle’s speed. This does not only require driver’s attention, but also, causes a certain level of discomfort to the driver and serves as a source of distraction which increases the risk of accidents. To offer comfort to the driver and essentially reduce the risk of accidents, an automatic rain sensing device has become a necessity, as they work to minimize the time the driver must take his/her hands off the wheel. Automatic rain sensing wiper system detects rain and starts automatically and stops when the rain stops.

## SWOT Analysis
## Strengths
* Hands-Free Calling.
* Automatically detects rain and wipes the windows by moving the wiper.
* Improve safety by decreasing driver distraction.
## Weakness
* The rain sensor-based system functions when water falls on the sensor directly.
* Additional cost is required in case optical sensor is used.
## Opportunities
* Safety
* Hands-free calling
## Threats
* It is replaced by an advanced technology
* Rubber blades, wiper motor can create a problem

## 4W's & 1H

## What
It is an automatic rain sensing wiper system that detects rain and starts automatically and stops when the rain stops.

## Why
For cleaning the rain drops fallen on windshield of the vehicle

## When
During rains

## Who
Gives clear visibility to the driver during rains

## How
Once the rain droplets fall on the windshield of the vehicle
## High Level Requirements

<html>
<body>
<!--StartFragment-->

ID | Description | Status 
-- | -- | --
HLR-1 | Turn on the Ignition | Implemented
HLR-2 | Activating wiper system | Implemented
HLR-3 | Controlling the speed of the wiper based on frequency levels | Implemented  
HLR-4 | Deactivating wiper system| Implemented
HLR-5 | Turn off the Ignition | Implemented

<!--EndFragment-->
</body>
</html>

## Low Level Requirements

<html>
<body>
<!--StartFragment-->

ID | Description | Status 
-- | -- | --
LLR-1 | Turn on the Microcontroller | Implemented
LLR-2 | Press push button for 2secs – RED LED ON| Implemented
LLR-3 | Press push button for first time - BLUE, GREEN,ORANGE LED’s glow with 1Hz frequency | Implemented
LLR-4 | Press push button for second time - BLUE,GREEN,ORANGE LED’s glow with 4Hz frequency | Implemented
LLR-5 | Press push button for  third time - BLUE,GREEN,ORANGE LED's glow with 8Hz frequency | Implemented
LLR-6 | Press push button for fourth time – ORANGE,GREEN,BLUE LED's stops glowing | Implemented
LLR-7 | Press push button for 2secs – RED LED OFF | Implemented


<!--EndFragment-->
</body>
</html>

## Behavioural Diagrams
## Block Diagram
![Block Diagram](https://user-images.githubusercontent.com/101034066/168331990-c128587c-31e8-4b0c-bba6-8a3caaa74bfd.jpeg)
## High Level Flow Chart
![HL Flow chart](https://user-images.githubusercontent.com/101034066/168323353-a377f4ae-3cb5-428e-b352-40520f493ebc.jpg)
## Low Level Flow Chart
![LL Flow chart](https://user-images.githubusercontent.com/101034066/168321051-fb700fc1-c621-4576-bfbb-d040f9cf5a35.jpg)
## Schematic Diagram
![Schematic Diagram](https://user-images.githubusercontent.com/101034066/168332403-b9eac1b6-9128-4a3d-9e16-b058b9c0d26a.jpeg)
