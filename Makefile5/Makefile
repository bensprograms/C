CC = gcc
CFLAGS = -Wall -g

# List of object files
OBJ = main.o add.o subtract.o

# Target for the final executable
my_program: $(OBJ)
	$(CC) $(CFLAGS) -o my_program $(OBJ)

# Compile the main file
main.o: main.c add.h subtract.h
	$(CC) $(CFLAGS) -c main.c

# Compile the add.c file
add.o: add.c add.h
	$(CC) $(CFLAGS) -c add.c

# Compile the subtract.c file
subtract.o: subtract.c subtract.h
	$(CC) $(CFLAGS) -c subtract.c

# Clean up object files and the executable
clean:
	rm -f *.o my_program
