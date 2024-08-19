#include <stdio.h>
#include <string.h>

#define MAX 50
/**
 * main - This program comapare the value of two variables
 * 
 * Return: Always 0.
 */
int main(void)
{
    char s[MAX], t[MAX];

    /*prompt input for s*/
    printf("s: ");
    scanf("%s", s);

    /*prompt input for t*/
    printf("t: ");
    scanf("%s", t);

    if (strcmp(s, t) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
    
}