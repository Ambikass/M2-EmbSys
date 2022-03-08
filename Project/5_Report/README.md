# Security System Using Ultrasonic Sensor


# Abstract

Traditional home security systems frequently necessitate installation and detect intrusion based on the opening and closing of doors and windows. Our ultrasonic security system will come in useful in situations where installation is not possible and/or the area of interest has no door because it does not require installation and identifies intruders based on their physical presence.
A transmitter and a receiver are installed on a spinning motor in the ultrasonic sensor module. To allow the sensor to move, a motor is used to cover 360-degree .The sound energy of ultrasonics is sent into an area from a transmitting device interest, which in turn reacts to a change in the reflected interest.Essentially, it is based on the echo concept.The microcontroller accepts this signal and continuously monitors the ultrasonic transmitter's receiver output.Once the distance has been computed, the microcontroller checks to see if the object is within the alert range set by the microcontroller. The microcontroller sounds an alarm if the object is within the minimal range.


# Identifing features

* The system should take the action if the object comes within the range.
* The distance from the object to the sensor should be displayed.
* Once the object is detected the buzzer should be on.
* The motor is used to cover 180 degree coverage of the sensor. 




# Requirements



## High Level Requirements


|ID       |Description   |
|---------|---------------|
| HLR1|The system should take action if anything comes within the range|
| HLR2|The distance should be measured|
| HLR3|The servo motor performs the function of a radar|
| HLR4|The buzzer should be on if the object detects|
| HLR5|If the object detects the servo motor should stop otherwise it keeps on rotating |


## Low Level Requirements


|ID   |Description     |
|-----|----------------|
|LLR1|The system must alert the user when an object detects|
|LLR2| The corresponding distance of the object from the sensor gets displayed on the LCD screen|
|LLR3| The servo motor rotates continuously between 0 and 180 degrees|



# SWOT Analysis


![Green White Pink Modern Minimalist Teal Competitor SWOT Analysis Template Graph (1)](https://user-images.githubusercontent.com/46968025/155762535-9027d85c-726d-4499-8531-0283c4897913.png)





# 5W's and 1H


![5W'S 1H](https://user-images.githubusercontent.com/46968025/155762540-e707de0e-0330-4ad8-8fa3-e354aa6420ac.PNG)






# Block Diagram

![Security_block_diagram](https://user-images.githubusercontent.com/46968025/155761706-c5a3f852-338b-4f99-bf0f-a79762e53583.PNG)


# Components 

## Micro controller
A microcontroller is a miniature computer built on a single MOS integrated circuit chip. A microcontroller is a computer that contains one or more CPUs , memory, and programmable input/output peripherals.Microcontrollers are utilized in products and devices that are automatically operated, such as car engine control systems, implantable medical devices, remote controls, office machinery, appliances, power tools, toys, and other embedded systems.
In this project microcontroller is used to interface all the peripherals.


## Ultrasonic sensor

An ultrasonic sensor is a piece of electronic equipment that produces ultrasonic sound waves and converts the reflected sound into an electrical signal in order to detect the distance between a target item and the sensor.
In this project an ultrasonic sensor is used to sense the object moment.


## Servo motor

A servo motor is a self-contained electrical device that rotates machine parts with high precision and efficiency.
In this project servo motor is used to allow the sensor to move and cover 360-degree


## LCD 

LCD is a display and LCD's have a backlight, and pixels are turned on and off electronically by rotating polarized light with liquid crystals.
In this project LCD is used to display the distance from the sensor to the object.

## ADC

Only analogue voltage values can be converted into digital values by an ADC. So, whatever parameter we want to monitor, it must first be translated into voltage, which may be accomplished with the help of sensors.
In this project ADC is used to convert sensor data to digital data 



# UML Diagrams

## Behavioral Diagram 

### Flow Chart Diagram

![Flow_chart](https://user-images.githubusercontent.com/46968025/155761722-16a6851e-0c59-419d-a96e-5698b26e6605.PNG)




## Structural Diagram

### Use Case Diagram

![Use case diagram](https://user-images.githubusercontent.com/46968025/155762293-c4dc48f6-6e9e-4dc1-9763-e5e27f107e4a.PNG)





# Test Plan


|Test ID   |Test Case objective  |Input data   |Expected output   |
|----------|---------------------|-------------|------------------|
|TC_01     |Object detection        |Object |Detected/Not detected|
|TC_02   |If object detects within the range  |Detected input of the sensor |Buzzer/LED on|
|TC_03   |The object detects|Object |Display the distance|
|TC_04|If the object should not detect  |Object |System continues it's working|


# Applications

 * Home
 * Offices
 * Institutes
 * Industries
 

