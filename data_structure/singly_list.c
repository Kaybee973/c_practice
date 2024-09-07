#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

int main(void)
{
    //initialize nodes
    node *HEAD = NULL;
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;

    // Allocating memory
    one = malloc(sizeof(node));
    two = malloc(sizeof(node));
    three = malloc(sizeof(node));

    // Joining nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    one->data = 1;
    two->data = 2;
    three->data = 3;

    HEAD = one;

    node *ptr;
    ptr = HEAD;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    return (0);
    
}
