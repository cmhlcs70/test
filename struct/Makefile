cc = gcc
CFAGS = -W -Wall
TARGET = PhoneBookMain_exe
OBJECTS = delete.o print.o register.o search.o phoneBookMain.o

all : $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean :
	rm *.o PhoneBookMain_exe

