#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: This program specify if the random number printed is positive or negative
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	   
    if (n > 0)//if n is greater is positive
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)//if n is negative
    {
        printf("%d is negative\n", n);
    }
    else//if n is 0
    {
        printf("%d is zero\n", n);
    }
    
	return (0);
}
