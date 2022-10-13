#include <stdio.h>
#include <math.h>

float power(float n, float m);

int main(void)
{
    float a, b;
    printf("Enter number: ");
    scanf("%f", &a);
    printf("Enter number: ");
    scanf("%f", &b);
    printf("%.2f" , power(a,b));
}

float power(float n, float m){
    return pow(n,m);
}

