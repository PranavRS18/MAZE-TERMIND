# Comprehensive Guide to Building and Running the Maze-Solving Robot

## This guide will walk you through the complete process of creating and operating the maze-solving robot as demonstrated in the RMI Robotics Workshop – MAZE-TERMIND.
### Step 1: Set Up Your Environment

Navigate to the robot's project directory
Open your terminal or command prompt and move into the robot's folder:

  cd path/to/robot_folder

#### Install project dependencies
Ensure you have pip installed, then run:

    pip install -r requirements.txt

This will install all necessary Python packages required for the project.

### Step 2: Generate Movement Data

#### Launch the Genesis notebook
Open genesis_25.ipynb using Jupyter Notebook:

    jupyter notebook genesis_25.ipynb

Run the notebook
Execute all cells in the notebook. This will process data and generate the angles.csv file, which contains the robot’s motion instructions (servo angles).

### Step 3: Assemble the Robot

Refer to the assembly guide
#### Open the provided PDF:
Genesis'25_Prototype_Assembly_Tutorial.pdf

Follow the instructions:

Assemble the robot arms, servo motors, and related mechanical parts as per the tutorial.

Carefully wire the electronics and circuits on the breadboard as illustrated in the guide.

### Step 4: Initialize Arduino Communication

#### Upload the Arduino sketch

Open pyserialtest_nano.ino in the Arduino IDE.

Select the correct board and port (typically Arduino Nano).

Upload the sketch to the Arduino.

This program enables the Arduino to establish serial communication with your Python script.
### Step 5: Execute the Robot Control Script

Run the Python script for serial communication
Back on your terminal, run:

    python serial_communication.py

This script reads angles.csv and sends angle data to the Arduino via serial communication, enabling the robot to begin its maze-solving routine.

Congratulations!

Your maze-solving robot is now ready to operate. Make sure to test it thoroughly and fine-tune both the software and hardware as necessary for optimal performance.
