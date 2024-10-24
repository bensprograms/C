#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int newline = 1;
    int i = 1;

    // Check if the first argument is "-n" to suppress the newline
    if (argc > 1 && strcmp(argv[1], "-n") == 0)
    {
        newline = 0;
        i = 2;
    }

    // Print all the arguments separated by spaces
    for (; i < argc; i++)
    {
        printf("%s", argv[i]);
        if (i < argc - 1)
        {
            putchar(' ');
        }
    }

    // Print a newline if not suppressed
    if (newline)
    {
        putchar('\n');
    }

    return 0;
}