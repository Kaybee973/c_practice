#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - This is a structure of a linked list
 * @number: integers in the list
 * @next: pointing to the address of the next integer
 */
typedef struct node
{
    int number;
    struct node *next;
}node;

/**
 * main - This program store command line argument in linked list
 * 
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return 1;
        }
        n->number = number;
        n->next = list;

        list = n;
    }
    node *ptr = list;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->number);
        ptr = ptr->next;
    }
    return (0);
}