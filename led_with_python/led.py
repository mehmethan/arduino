import serial

serial_con = serial.Serial('/dev/ttyUSB0', 9600)
while True:
    command = raw_input("1.Open / 2.Close : ")
    serial_con.write(command)
