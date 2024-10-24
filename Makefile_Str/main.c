#include <stdio.h>
#include "string_ops.h"

int main()
{
    char str1[50] = "Hello, ";
    char str2[50] = "Ziyi!";
    char result[100];

    // Concatenate strings
    concatenate(result, str1, str2);
    printf("Concatenated String: %s\n", result);

    // Find the length of the concatenated string
    int length = string_length(result);
    printf("Length of the String: %d\n", length);

    return 0;
}
