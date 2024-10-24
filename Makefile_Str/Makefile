CC = gcc
CFLAGS = -Wall -g

# List of object files
OBJ = main.o string_ops.o

# Target for the final executable
my_program: $(OBJ)
	$(CC) $(CFLAGS) -o my_program $(OBJ)

# Compile the main.c file
main.o: main.c string_ops.h
	$(CC) $(CFLAGS) -c main.c

# Compile the string_ops.c file
string_ops.o: string_ops.c string_ops.h
	$(CC) $(CFLAGS) -c string_ops.c

# Clean up object files and the executable
clean:
	rm -f *.o my_program
