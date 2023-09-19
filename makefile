#Define the compiler and compiler flags
CC=gcc
CFLAGS=-I. -Wall

#Define the header file dependency
DEPS = list.h


#Define the object files to be generated
OBJ = list.o list_test.o

#Generate object files from source files
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

#Build the 'list_test' executable
list_test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

#Declare the 'clean' target
.PHONY: clean

#Clean up the project
clean:
	rm -f *.o list_test


#first command: gcc -c -o list.o list.c -I. -Wall
#second command: gcc -c -o list_test.o list_test.c -I. -Wall
#third command: gcc -o list_test list.o list_test.o -I. -Wall
