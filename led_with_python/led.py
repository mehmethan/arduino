import serial

serial_con = serial.Serial('/dev/ttyUSB0', 9600)
while True:
    command = raw_input("1.On / 2.Off : ")
    serial_con.write(command)
