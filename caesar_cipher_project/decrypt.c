// decrypt.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // For strlen()
#include "caesar_cipher.h"

#define MAX_LEN 1024

// Brute-force decryption function - now includes shift from 0 to 25
void brute_force_decrypt(char* input) {
    char output[MAX_LEN];
    printf("Brute-force decryption attempts:\n");
    for (int shift = 0; shift < 26; shift++) {  // Shift from 0 to 25
        decrypt(input, output, shift);
        printf("Shift %d: %s\n", shift, output);
    }
}

int main() {
    char input[MAX_LEN], output[MAX_LEN];
    int shift;
    int choice;

    printf("Enter the message to decrypt: ");
    fgets(input, MAX_LEN, stdin);

    // Remove the newline character if it's there
    size_t len = strlen(input);
    if (input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    printf("Choose decryption method:\n");
    printf("1. Enter shift value manually\n");
    printf("2. Brute-force decrypt (try all shift values)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the shift value: ");
        scanf("%d", &shift);
        decrypt(input, output, shift);
        printf("Decrypted message: %s\n", output);
    } else if (choice == 2) {
        brute_force_decrypt(input);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
