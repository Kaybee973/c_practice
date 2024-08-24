#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *s;
    int len = strlen(s);

    s = malloc(sizeof(len + 1));

    printf("S: ");
    scanf("%s", s);

    printf("%s\n", s);

    return (0);
}