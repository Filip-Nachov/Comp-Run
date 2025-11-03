CC = gcc
SRC = src/main.c
TARGET = CAR

default:
	$(CC) -o $(TARGET) $(SRC)

clean:
	rm $(TARGET)
