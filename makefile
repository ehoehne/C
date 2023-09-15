CC=gcc
CFLAGS=-I. -Wall
DEPS = list.h
OBJ = list.o list_test.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

list_test: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f *.o list_test

##first command: gcc -c -o list.o list.c -I. -Wall
##second command: gcc -c -o list_test.o list_test.c -I. -Wall
##third command: gcc -o list_test list.o list_test.o -I. -Wall
