#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - This program create and store info in a text file
 * 
 * Return: Always 0.
 */
int main(void)
{
    FILE *file = fopen("test.txt", "w+");
    if (file == NULL)
    {
        return 1;
    }

    /*Buffer memory to store string vaue*/
    char temp[100];
    printf("Input a sentence for the file: ");
    fgets(temp, sizeof(temp), stdin);

    /*Dynamically allocating memory to the string*/
    char *s;
    s = malloc(sizeof(strlen(temp) + 1));
    if (s == NULL)
    {
        return 1;
    }

    /*copying the string back to s*/
    strcpy(s, temp);

    /*writing to file*/
    fprintf(file, "%s\n", s);

    free(s);
    fclose(file);

    printf("The file test.txt created successfully...!!\n");

    return (0);    
}