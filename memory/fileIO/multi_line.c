#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program writes multiple lines to a text file
 * 
 * Return: Always 0.
 */
int main(void)
{
    FILE *file;
    file = fopen("multiline.txt", "w+");

    char *s = "test line";
    int n = 1;

    fputs("The content of the file is :", file);
    fputs("\n", file);

    while (n <= 4)
    {
        fprintf(file, "%s %d\n", s, n);
        n++;
    }
    fclose(file);

    return (0);
}
