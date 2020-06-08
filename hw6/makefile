CC=gcc
CFLAGS=-g -Wall
TARGET=hw6Main_exe
OBJECTS=delete.o print.o register.o search.o sort.o hw6Main.o

all:$(TARGET)
$(TARGET):$(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean:
	rm *.o hw6Main_exe
