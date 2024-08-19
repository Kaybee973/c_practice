#include <stdio.h>
#include <string.h>

#define NAME 30
#define MAX_LEN 5


/**This is the structure of a candidate */
typedef struct
{
    char name[NAME];
    int vote;
}
candidate;

/*Declaration of function*/
candidate elect(char *prompt);

/**
 * main - This program prints name of election candidates and their votes
 * 
 * Return: Always 0.
 */
int main(void)
{
   candidate abes_vote[MAX_LEN];

   for (int i = 0; i < MAX_LEN; i++)
   {
        abes_vote[i] = elect("Enter a candidate: ");
   }

   return (0);

}

candidate elect(char *prompt)
{
    printf("%s\n", prompt);

    candidate c;

    /*prompt voters to vote a candidate*/
    printf("Candidate name: ");
    scanf("%s", c.name);

    printf("Candidate votes: ");
    scanf("%d", &c.vote);

    return c;
}