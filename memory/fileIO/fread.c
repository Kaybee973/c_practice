#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    int b;
}six;

/**
 * main - This program read binary from file
 * 
 * Return: Always 0.
 */
int main(void)
{
    six multi;
    FILE *file = fopen("six_times.bin", "rb");

    printf("Six Multiplication Table\n");
    while (fread(&multi, sizeof(multi), 1, file) != 0)
    {
        printf("6 * %d\t=\t%d\n", multi.a, multi.b);
    }
    fclose(file);
    return (0);
    
}
