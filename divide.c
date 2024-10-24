#include <stdio.h>

int main()

{
    float x = 5.123;
    float y = 1.111;
    float quotient = x / y;
    
    printf("%.2lf divided by %.2lf is %.2lf\n", x, y, quotient);
    return 0;
}