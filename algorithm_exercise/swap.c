#include <stdio.h>

/**
 * main - This program swap the value of two integers and prints the swap
 * 
 * Return: Always 0.
 */
int main(void)
{
    int x, y, swap;

    /*prompt users for 'x' input*/
    printf("Enter value of 'X': ");
    scanf("%d", &x);

    /*prompt users for 'y' input*/
    printf("Enter 'Y' value: ");
    scanf("%d", &y);

    /*Swapping*/
    swap = x;
    x = y;
    y = swap;

    /*After swapping*/
    printf("X: %d\n", x);
    printf("Y: %d\n", y);
    return (0);
}