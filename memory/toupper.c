#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char *s;

    /*prompt users for input*/
    printf("Input: ");
    scanf("%s", s);

    char *t = malloc(strlen(s + 1));

    strcpy(t, s);

    if (strlen(t) > 1)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("%s\n", s);
    printf("%s\n", t);

    free(t);

    return (0);
}