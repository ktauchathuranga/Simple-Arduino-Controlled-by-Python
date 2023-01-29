import serial

arSerial = serial.Serial('COM3', 9600)
print(arSerial.readline().decode('utf8'))

while True:
    userInput = input('Enter 1 or 0: ')

    if userInput == '1':
        arSerial.write('1'.encode())
    elif userInput == '0':
        arSerial.write('0'.encode())
    else:
        arSerial.write('0'.encode())
        break


