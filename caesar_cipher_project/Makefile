# Makefile

CC = gcc
CFLAGS = -Wall -g

all: encrypt decrypt

encrypt: encrypt.o caesar_cipher.o
	$(CC) $(CFLAGS) -o encrypt encrypt.o caesar_cipher.o

decrypt: decrypt.o caesar_cipher.o
	$(CC) $(CFLAGS) -o decrypt decrypt.o caesar_cipher.o

encrypt.o: encrypt.c caesar_cipher.h
	$(CC) $(CFLAGS) -c encrypt.c

decrypt.o: decrypt.c caesar_cipher.h
	$(CC) $(CFLAGS) -c decrypt.c

caesar_cipher.o: caesar_cipher.c caesar_cipher.h
	$(CC) $(CFLAGS) -c caesar_cipher.c

clean:
	rm -f *.o encrypt decrypt
