#include <stdio.h>

/**
 * main - This program prints if input integer is even orodd number
 * 
 * Return: Always 0.
 */
int main(void)
{
    int x;

    /*prompt users for input*/
    printf("Enter value: ");
    scanf("%d", &x);

    /*check if integer is even or odd*/
    if (x % 2 == 0)
    {
        printf("This is an even number\n");
        return (0);
    }
    printf("This number is an odd number\n");
}