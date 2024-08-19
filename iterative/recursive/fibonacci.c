#include <stdio.h>

void fibonacci(int n);

/**
 * main - This program prints out number in fibonacci series
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    /*prompt users for input*/
    printf("Enter nth term: ");
    scanf("%d", &n);

    fibonacci(n);

}

void fibonacci(int n)
{
    int f = 0, s = 1, next; /*where f is first term, s is second term, and next is the addition of f and s*/
    
    printf("%d, %d, ", f, s);
    for (int i = 2; i < n; i++)
    {
        next = f + s;
        f = s;
        s = next;
        printf("%d, ", f);
    }
}
