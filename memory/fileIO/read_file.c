#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100
/**
 * main - This program read an existing file
 * 
 * Return: Always 0.
 */
int main(void)
{
    char fn[20]; /*file name*/
    /*prompt users for filename*/
    printf("Input the file name to be opened: ");
    scanf("%s", fn);

    FILE *file = fopen(fn, "r");
    if (file == NULL)
    {
        return 1;
    }
    
    char s[MAX];

    printf("\n\nThe content of the file is ⬇️\n");

    if (fgets(s, MAX, file) != NULL)
    {
        puts(s);
    }
    fclose(file);
    
    return (0);    
}
