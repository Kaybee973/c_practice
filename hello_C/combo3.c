#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints different numbers combination of three digits
 * Return: Always 0 (success)
 */
int main(void)
{
    int a, b, c;
    for (a = '0'; a < '8'; a++)
    {
        for (b = '1'; b < '9'; b++)
        {
            for (c = b + 1; c <= '9'; c++)
            {
                if (b != c)
                {
                    putchar(a);
                    putchar(b);
                    putchar(c);
                    if (a == '7' && b == '8' && c == '9')
                    {
                        continue;
                    }
                    putchar(',');
                    putchar(' ');
                }
                
            }
            
        }
        putchar('\n');
        
    }
}