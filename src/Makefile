CC = g++
CFLAGS =  -Wall -c -std=c++11
LIBS = -lgtest -lpthread
TARGET = main

$(TARGET): $(TARGET).o Line.o Stop.o Train.o
	$(CC) -Wall $(TARGET).o Line.o Stop.o Train.o -o $(TARGET) $(LIBS)

$(TARGET).o: $(TARGET).cpp
	$(CC) $(CFLAGS) $(TARGET).cpp

Line.o: Line.cpp Line.h
	$(CC) $(CFLAGS) Line.cpp

Stop.o: Stop.cpp Stop.h
	$(CC) $(CFLAGS) Stop.cpp

Train.o: Train.cpp Train.h
	$(CC) $(CFLAGS) Train.cpp

# .PHONY evita que make trate clean como un target
.PHONY: clean
# Borra los ficheros resultado de manera recursiva y sin confirmación
clean:
	rm -rf *.o $(TARGET)
