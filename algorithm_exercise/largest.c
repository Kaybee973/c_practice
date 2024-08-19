#include <stdio.h>

/**
 * main - This program prints the largest of three integers
 * 
 * Return: Always 0.
 */
int main(void)
{
    int x, y, z;

    /*prompt users for input*/
    printf("Enter first value: ");
    scanf("%d", &x);

    printf("Enter second value: ");
    scanf("%d", &y);

    printf("Enter third value: ");
    scanf("%d", &z);

    /*check for the largest integer*/
    if ((x > y) && (x > z))
    {
        printf("%d is the greatest\n", x);
    }
    else if ((y > x) && (y > z))
    {
        printf("%d is the greatest\n", y);
    }
    else
    {
        printf("%d is the greatest\n", z);
    }
    return (0);   
}
