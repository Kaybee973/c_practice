#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    int b;
}six;

/**
 * main - This program write 6 multiplication into a file
 * 
 * Return: Always 0.
 */
int main(void)
{
    six multi;
    FILE *file;

    /*open file*/
    file = fopen("six_times.bin", "wb");
    if (file == NULL)
    {
        return 0;
    }
    
    for (int i = 1; i <= 12 ; i++)
    {
        multi.a = i;
        multi.b = 6 * i;

        /*write into file*/
        fwrite(&multi, sizeof(six), 1, file);
    }

    fclose(file);

    printf("Write binary into file successfully \n");

    return (0);
    

    


    

}