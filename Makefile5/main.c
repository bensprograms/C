#include <stdio.h>
#include "add.h"
#include "subtract.h"

int main()
{
    int num1 = 10, num2 = 5;

    printf("Sum: %d\n", add(num1, num2));
    printf("Difference: %d\n", subtract(num1, num2));

    return 0;
}
