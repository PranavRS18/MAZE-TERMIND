import csv
import serial
import time

csv_filename = 'angles.csv'

theta_1_loaded = []
theta_4_loaded = []

with open(csv_filename, 'r') as csvfile:
    csv_reader = csv.reader(csvfile)
    header = next(csv_reader)  # Skip the header row

    for row in csv_reader:
        theta_1_value = row[0]
        theta_4_value = row[1]

        theta_1_loaded.append(float(theta_1_value))
        theta_4_loaded.append(float(theta_4_value))


N_Points = len(theta_4_loaded)
print(N_Points)
print("1")

arm = serial.Serial('/dev/ttyUSB0', 9600)
print("Connected")


for i in range(0, N_Points):
    s = str(round(float(theta_4_loaded[i]), 2)) + " " + str(round(float(theta_1_loaded[i]), 2)) + "\n"
    print(s + " " + str(i))
    arm.write(s.encode('utf-8'))
    time.sleep(0.5  )
