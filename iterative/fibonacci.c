#include <stdio.h>

void fibonacci(int n);

/**
 * main - This program prints the numbers in fibonacci series
 * 
 * Return: Always 0.
 */
int main(void)
{
    int n;
    //prompt users for nth term
    printf("Enter the nth term: ");
    scanf("%d",&n);

    fibonacci(n);
}

/**
 * fibonacci - This function calculates the fibonacci series
 * @n: The number of terms to be printed
 * Return: nothing
 */
void fibonacci(int n)
{
    int f = 0, s = 1, next;

    printf("%d", f);

    for (int i = 1; i < n; i++)
    {
        next = f + s;
        f = s;
        s = next;
        printf(", %d", f);
    }   
    printf("\n");
}
