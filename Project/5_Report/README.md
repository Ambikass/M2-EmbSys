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


|ID       |Description   | Status|
|---------|---------------|------|
| HLR1|The system should take action if anything comes within the range|Implemented|
| HLR2|The distance should be measured|Implemented|
| HLR3|The servo motor performs the function of a radar|Implemented|
| HLR4|The buzzer should be on if the object detects|Implemented|
| HLR5|If the object detects the servo motor should stop otherwise it keeps on rotating |Implemented|


## Low Level Requirements


|ID   |Description    |HLR ID |Status|
|-----|----------------|-----|------|
|LLR1|The system should alert the user when an object detects|HLR1 HLR4|Implemented|
|LLR2| The corresponding distance of the object from the sensor should be displayed on the LCD screen|HLR2|Implemented|
|LLR3| The servo motor should rotates continuously between 0 and 180 degrees if the object is not detects|HLR3 HLR5|Implemented|




# SWOT Analysis


![Green White Pink Modern Minimalist Teal Competitor SWOT Analysis Template Graph (1)](https://user-images.githubusercontent.com/46968025/155762535-9027d85c-726d-4499-8531-0283c4897913.png)





# 5W's and 1H


![5W'S 1H](https://user-images.githubusercontent.com/46968025/155762540-e707de0e-0330-4ad8-8fa3-e354aa6420ac.PNG)






# Block Diagram

![NEW_BD](https://user-images.githubusercontent.com/46968025/157029669-233dd6b7-3f61-4182-bedf-f8dafa39743b.PNG)


# Components 

## Arduino UNO

* The Arduino/Genuino Uno microcontroller board is based on the ATmega328P microcontroller. There are 14 digital input/output pins (six of which can be used as PWM outputs), six analogue inputs, a 16 MHz quartz crystal, a USB connection, a power jack, an ICSP header, and a reset button on the board.
* In this project an arduino uno is used to interface all the periferals.


## Ultrasonic sensor

* An ultrasonic sensor is a piece of electronic equipment that produces ultrasonic sound waves and converts the reflected sound into an electrical signal in order to detect the distance between a target item and the sensor.
* In this project an ultrasonic sensor is used to sense the object .


## Servo motor

* A servo motor is a self-contained electrical device that rotates machine parts with high precision and efficiency.
* In this project servo motor is used to allow the sensor to move and cover 180-degree


## LCD 

* LCD is a display and LCD's have a backlight, and pixels are turned on and off electronically by rotating polarized light with liquid crystals.
* In this project LCD is used to display the distance from the sensor to the object.


## ADC

* Only analogue voltage values can be converted into digital values by an ADC. So, whatever parameter we want to monitor, it must first be translated into voltage, which may be accomplished with the help of sensors.
* In this project ADC is used to convert sensor data to digital data 


## Potentiometer

* A potentiometer is a voltage divider that consists of a three-terminal resistor with a sliding or revolving contact.It operates as a variable resistor or rheostat when only two terminals, one end and the wiper, are employed.
* In this project potentiometer is used to act like an object for the ultrasonic sensor.


## Buzzer

* It is an electric signaling device that makes a buzzing sound.
* In this project the buzzer is used to alert the user.


# UML Diagrams

## Behavioral Diagram 

### Flow Chart


![New_FC](https://user-images.githubusercontent.com/46968025/157029694-1c9c14ed-4377-429b-b843-c08bbff39bec.PNG)




## Structural Diagram

### Use Case Diagram


![New_uc](https://user-images.githubusercontent.com/46968025/157029684-df9a03bf-a127-46ec-a83b-be263936296c.PNG)



# Simulation pictures

## Before the starting of the security system.

![Screenshot (4)](https://user-images.githubusercontent.com/46968025/157030793-eccb9712-0bbb-4b84-b82a-8e0eeef13eec.png)


## When the person/object is not detected the servo motor keeps on rotatinng.

![Screenshot (5)](https://user-images.githubusercontent.com/46968025/157030798-03dd7ea3-1fe5-4185-b34f-fd0f9198e4e8.png)


## When the person/object is detected the buzzer & LED will alert the user and LCD diisplays the distance of the person (in cm) from the LCD.

![Screenshot (6)](https://user-images.githubusercontent.com/46968025/157030813-f54ed48e-a16f-4c03-8552-fde1117159c5.png)


## Again if the person/object is not detected then the servo motor rotates continuously from 0-180 degree and vice-versa.

![Screenshot (7)](https://user-images.githubusercontent.com/46968025/157030826-a112d40d-b2c8-4ca8-858c-75b1239e03fe.png)





# Test Plan


|Test ID   |Test Case objective  |Input data   |Expected output   |Actual Output|
|----------|---------------------|-------------|------------------|-------------|
|TC_01     |Object/person detection        |Object/person |Detected/Not detected|Detected/Not detected|
|TC_02   |If the object/person detects  |Detected input of the sensor |Buzzer on|Buzzer on|
|TC_03   |If the object/person detects|Object/person |Display the distance of the person/object from the lcd|Display the distance of the person/object from the lcd|
|TC_04   |If the object/person detects|Object/person |Servo motor should stop|Servo motor should stop|
|TC_05|If the object/person should not be detected  |Object/person |Servo motor keeps on rotating|Servo motor keeps on rotating|


# Applications

 * Security system is used in houses.
 * Security system is used in offices.
 * Security system is used in industries.
 * Security system is used in institutes.
 * Wherever we required security we can use the security system.

