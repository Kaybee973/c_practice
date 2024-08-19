#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define MAX_NUM 10
#define POT_NUM 5

void jackpot(char *stake);

/**
 * main - This program prints TRUE/FALSE if number is found
 * 
 * Return: Always 0.
 */
int main(void)
{
    char s[10]; //search

    jackpot(s);
}


/**
 * jackpot - This function check if money is behind door and return TRUE/FALSE
 * Return:
 */
typedef struct
{
    char number [MAX_NUM];
}
lucky;

void jackpot(char *stake)
{
    lucky pots [POT_NUM];

    /*Assigning random numbers to each pots*/
    // srand(time(NULL));J
    for (int i = 0; i < POT_NUM; i++)
    {
        int random_num = rand() % 10; /*Numbers between 0 - 99*/
        snprintf(pots[i].number, MAX_NUM, "%d", random_num);
    }
    

    /*prompt users for input*/
    printf("Search: ");
    scanf("%s", stake);

    for (int i = 0; i < POT_NUM; i++)
    {
        if (strcmp(pots[i].number, stake) == 0 )
        {
            printf("Congratulations! You won");
        }
    }
    printf("Sorry! Try again\n");
}
