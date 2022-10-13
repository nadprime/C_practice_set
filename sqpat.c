#include<stdio.h>

// square pattern 4 * 5

int main(void)
{
    int n = 5;
    for (int i = 0; i < n-1; i++)
    {
         for (int j = 0; j < n; j++)
         {
             printf("#");
         }
        
      printf("\n"); 
    }
    
}