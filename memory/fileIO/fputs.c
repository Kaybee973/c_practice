#include <stdio.h>
#include <stdlib.h>

/**
 * main - This program write into file with fputs
 * 
 * Return: Always 0.
 */
int main(void)
{
    FILE *file = fopen("hello.txt", "w+");
    if (file == NULL)
    {
        return 1;
    }

    char *s = "Today is Sunday, work free day!";

    fputs(s, file);

    fclose(file);

    printf("Done\n");

    return (0);
}
