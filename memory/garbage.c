#include <stdio.h>
#include <stdlib.h>

#define MAX 1020
/**
 * main - This program is for testing garbage value
 * Description: Garbage value is the value assigned to uninitialised variable in the memory
 * Return: Always 0.
 */
int main(void)
{
    int *n;
    n = malloc(MAX * sizeof(int));

    for (int i = 0; i < MAX; i++)
    {
        printf("%d\n", n[i]);
    }
    free(n);
    return (0);
}