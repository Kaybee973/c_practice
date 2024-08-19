#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints lowercase and uppercase on the same line, followed by new line
 * Return: Always 0 (success)
 */
int main(void)
{
    char alpha = 'a';
    while (alpha <= 'z')
    {
        putchar(alpha++);
    }
    char b_alpha = 'A';
    while (b_alpha <= 'Z')
    {
        putchar(b_alpha++);
    }
    putchar('\n');

    return (0);   
}
