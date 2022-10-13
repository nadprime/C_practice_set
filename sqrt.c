// C program for the above approach
#include <math.h>
#include <stdio.h>

// Function to find the square-root of N
double findSQRT(double N) { return sqrt(N); }

int main()
{

	// Given number
	int N ;
    printf("Enter number: ");
    scanf("%d", &N);

	// Function call
	printf("%.2f ", findSQRT(N));
	return 0;
}
