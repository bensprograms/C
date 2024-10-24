// encrypt.c

#include <stdio.h>
#include <stdlib.h>
#include "caesar_cipher.h"

#define MAX_LEN 1024

int main() {
    char input[MAX_LEN], output[MAX_LEN];
    int shift;

    printf("Enter the message to encrypt: ");
    fgets(input, MAX_LEN, stdin);

    printf("Enter the shift value: ");
    scanf("%d", &shift);

    encrypt(input, output, shift);

    printf("Encrypted message: %s\n", output);

    return 0;
}
