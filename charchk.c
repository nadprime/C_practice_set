#include <stdio.h>

int main()
{
    int a;
    printf("Enter character: ");
    scanf("%d", &a);
    printf("%d", a >= 0 && a <= 9);
    return 0;
}
