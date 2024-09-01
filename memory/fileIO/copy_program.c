#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

/**
 * main - This program copy file using command lime argument
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        return 1;
    }
    
    /*opening files*/
    FILE *src = fopen(argv[1], "rb");
    if (src == NULL)
    {
        return 1;
    }
    
    FILE *dst = fopen(argv[2], "wb");
    if (dst == NULL)
    {
        return 1;
    }
    

    BYTE b;

    while (fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);

    printf("file backup successfully\n");

    return (0);
}