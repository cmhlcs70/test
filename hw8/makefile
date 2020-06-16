CC=gcc
CFLAGS=-g -Wall
TARGET=hw8Main.exe
OBJECTS=delete.o print.o register.o search.o sort.o hw8Main.o

all:$(TARGET)
$(TARGET):$(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ 
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@ 
clean:
	rm *.o hw8Main.exe
