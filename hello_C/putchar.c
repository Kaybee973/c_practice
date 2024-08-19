#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: This program that prints all possible different combinations of two digits.
 * Return: Always 0 (success)
 */
int main(void)
{
  
    for (int i = '0'; i < '9'; i++)
    {
        for (int j = i + 1; j <= '9'; j++)
        {
            if (i != j)
            {
                putchar(i);
                putchar(j);

                if (i == '8' && j == '9')
                {
                    continue;
                }
                
                putchar(',');
                putchar(' ');
            }
            
        }
        
    }
    
    
    putchar('\n');

    return (0);   
}