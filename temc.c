#include <stdio.h>
void hot();
void cold();
int main()
{
    int t;
    printf("Enter number: ");
    scanf("%d", &t);
    if (t <= 20)
    cold();
    else 
    hot();
}

void hot(){
    printf("Hot");
}

void cold(){
    printf("Cold");
}


