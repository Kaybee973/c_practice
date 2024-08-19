#include <stdio.h>
#include <string.h>

#define MAX_NUM 20

/**
 * main - This program check inputs is in the string of array, and return found or not found
 * 
 * Return: Always 0.
 */
int main(void)
{
    char *faculties[] = {"education", "arts", "science", "engineering", "social science", "management science", "law"};

    /*prompt users for input*/
    char faculty[MAX_NUM];
    printf("search number: ");
    scanf("%s", faculty);

    for (int i = 0; i < 7; i++)
    {
        if (strcmp(faculties[i], faculty) == 0)
        {
            printf("Found\n");
            return (0);
        }
        
    }
    printf("Not Found!\n");
    return (1);
}
