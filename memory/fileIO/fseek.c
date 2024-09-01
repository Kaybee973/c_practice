#include <stdio.h>

/**
 * main - This program move the file pointer to a preferred location
 * 
 * Return: Always 0.
 */
int main(void)
{
    FILE *file;
    file = fopen("seek.txt", "w+");

    char *s = "I love my friends";

    fputs(s, file);

    fseek(file, 10, SEEK_SET);

    fputs("C Programming", file);

    fclose(file);

    FILE *ptr = fopen("seek.txt", "r");
    char str[100];

    if (fgets(str, 100, ptr) != NULL)
    {
        puts(str);
    }
    
    

    fclose(ptr);

    return (0);
}