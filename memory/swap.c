#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
/**
 * main - This program swap the value of one variable for anither
 * 
 * Return: Always 0.
 */
int main(void)
{
    int x, y;

    /*prompt users for 'x' value*/
    printf("X: ");
    scanf("%d", &x);

    /*prompt users foy 'y' input*/
    printf("Y: ");
    scanf("%d", &y);

    printf("X was %d,\t Y was %d\n", x, y);
    swap(&x, &y);
    printf("X is %d, \t Y is %d\n", x, y);

    return (0);

}

/**
 * swap - This function swap the value of two variables
 * @a: first integer
 * @b: second integer
 * Return: nothing
 */
void swap(int *a, int *b)
{
    int temp = *b;
    *b = *a;
    *a = temp;
}