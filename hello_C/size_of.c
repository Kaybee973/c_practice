#include <stdio.h>

/**
 * main - Entry point
 * Description: This program prints the size of various types on the computer it is compiled and run on
 * Return: Always 0 (success)
 */

int main(void)
{
    int a; //size of integer
    char b; //size of character
    long c; //size of long
    long long d; //size of long long
    float e; //size of float

    printf("Size of a char: %lu bytes(s)\n", sizeof(b));
    printf("Size of a int: %lu bytes(s)\n", sizeof(a));
    printf("Size of a long: %lu bytes(s)\n", sizeof(c));
    printf("Size of a long long: %lu bytes(s)\n", sizeof(d));
    printf("Size of a float: %lu bytes(s)\n", sizeof(e));

    return (0);
}