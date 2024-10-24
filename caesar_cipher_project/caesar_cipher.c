// caesar_cipher.c

#include "caesar_cipher.h"
#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

void encrypt(char* input, char* output, int shift) {
    int i = 0;
    while (input[i] != '\0') {
        if (isalpha(input[i])) {
            char base = islower(input[i]) ? 'a' : 'A';
            output[i] = (input[i] - base + shift) % ALPHABET_SIZE + base;
        } else {
            output[i] = input[i]; // Non-alphabet characters remain unchanged
        }
        i++;
    }
    output[i] = '\0';
}

void decrypt(char* input, char* output, int shift) {
    encrypt(input, output, ALPHABET_SIZE - shift); // Decryption is reverse encryption
}
