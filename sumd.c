// C program to compute sum of digits in
// number.
#include <stdio.h>

/* Function to get sum of digits */
int getSum(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf(" %d ", getSum(n));
    return 0;
}
