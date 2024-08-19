#include <stdio.h>

/**
 * main - This program prints the product of two numbers
 * 
 * Return: Always 0.
 */
int main(void)
{
    int x, y, result;

    /*prompt users for 'x' input*/
    printf("Enter value of 'X' :");
    scanf("%d", &x);

    /*prompt users for y input*/
    printf("Enter value of 'Y' :");
    scanf("%d", &y);

    result = x * y;
    printf("Result: %d\n", result);

    return (0);
}
