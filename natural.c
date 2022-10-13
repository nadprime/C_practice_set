#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    (num >= 0) ? printf("Natural Number:") : printf("Not a natural number");    
}