#include <stdio.h>

int main()
{
    int a, b, c, sum, avg;
    a = 10;
    b = 5;
    c = 20;

    sum = a + b + c;
    avg = sum / 3;
    printf("Average of three numbers is: %d", avg);
    return 0;
}