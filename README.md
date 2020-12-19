# RFID INTEGRATED SECURITY SYSTEM

This software provides an RFID Integrated Security System which allows for registering new users, updating the existing database and maintaining daily log of the cards scanned. It is available out of the box and is ready to deploy.

## Hardware Requirements
- Arduino Uno Rev3
- RFID RC522 (13.56MHz) + Respective RFID Tags

## Software Requirements
- VisualBasic Studios 2019 or higher (Install atleast one .NET module for windows forms)
- Arduino IDE
- XAMPP by Apache (for DataBase)

## Description
The main directory contains three sub-directories:
- Resources
- RFID-Arduino
- RFID-UI

### 1. Resources
This directory contains all the media resources required for the user interface.
For the subsequent images which will need to be added to the Database a separate directory 'Images' can be created. 

### 2. RFID-Arduino
This directory contains the code for Arduino(microcontroller) Interface. 
This directory will not need to be modified unless ambiguities in hardware.

### 3. RFID-UI
This directory contains the code for the user-interface. The code is in VisualBasic Studios hence VB Studios is required to run the interface.
Within this directory opening the RFID-UI.sln file should open the interface aswell as the code.


## Steps for Setup
### A. Setting up database
- Open the XAMPP Panel
- Start the Apache and MySQL
- *Open any browser window and in the url bar typein "localhost/" 
- Enter Username and Password to access database

*: the access and host settings need to be changed to allow the particular device access to the database

### B.Setting up Hardware
- Connect the Hardware System to the laptop/PC
- Open RFID-Arduino directory and open the RFID-Arduino code using the Arduino IDE
- Compile and upload the code to the Hardware

### C. Starting User Interface
- Open the RFID-UI.sln file in the RFID-UI directory.
- Click on start 
#### ** The Interface should be alive now **

### D. Interface
- Click on scan port and select to proper port.
- Click on connect
#### ** the interface should now be connected to the rfid reader **
- Click on User Data panel to view the user data on scanning an RFID tag
- Click on Registration/Edit User Data to create new entries and edit existing ones


