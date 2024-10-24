# This is a comment in the Makefile
# Variables
CC = gcc
CFLAGS = -Wall -g

# The target build process
hello: main.o
	$(CC) $(CFLAGS) -o hello main.o

# Rule to create the .o file
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Clean up the build
clean:
	rm -f *.o hello
