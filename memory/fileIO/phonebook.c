#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - This program write into a file named phonebook
 * 
 * Return: Always 0.
 */
int main(void)
{
    FILE *file = fopen("contacts.csv", "a");
    if (file == NULL)
    {
        return 1;
    }
    

    char *n; /*contact names*/
    char *p; /*contact phone number*/

    /*Allocating memory to the strings*/
    n = malloc(sizeof(strlen(n) + 1));
    if (n == NULL)
    {
        return 1;
    }
    p = malloc(sizeof(strlen(p) + 1));

    if (p == NULL)
    {
        return 1;
    }
    

    /*names*/
    printf("Name: ");
    scanf("%s", n);

    /*phone number*/
    printf("phone_num: ");
    scanf("%s", p);

    /*write into the file*/
    fprintf(file, "%s,%s\n", n, p);
    fclose(file);
}