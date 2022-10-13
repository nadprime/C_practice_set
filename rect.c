#include <stdio.h>

int main()
{
    float a, b;
    // input side a
    printf("Enter side a : ");
    scanf("%f", &a);
    // input side b
    printf("Enter side b : ");
    scanf("%f", &b);
    // print perimeter
    printf("Perimeter of rectangle is: %.2f", 2 * (a + b));
}