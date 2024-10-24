#include "string_ops.h"
#include <string.h>

// Concatenates two strings and stores the result in 'result'
void concatenate(char *result, const char *str1, const char *str2)
{
    strcpy(result, str1);    // Copy str1 to result
    strcat(result, str2);    // Concatenate str2 to result
}

// Returns the length of a string
int string_length(const char *str)
{
    return strlen(str);   // Uses the standard strlen() function
}
