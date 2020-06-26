CC=gcc
CFLAGS=-g -Wall
INCLUDE = -I.
LIBS = -L. -lm
OBJECTS = main.o delete.o print.o register.o search.o save.o sort.o
all : main
    
%.o : %.c
	$(CC) $(INCLUDE) $(CFLAGS) $<
main : $(OBJECTS)
	$(CC) $(CFLAGS) -o main $(OBJECTS) $(LIBS)\
clean : 
	rm -f main $(OBJECTS)

