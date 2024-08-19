#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

/**
 * main - prints gcd and lcm of number inputted
 * 
 * Return: Always 0.
 */
int main(void)
{
    int x, y;

    /*prompt users for 'X' number*/
    printf("Enter 'X' number: ");
    scanf("%d", &x);
    
    /*prompt users for 'Y' number*/
    printf("Enter 'Y' number: ");
    scanf("%d", &y);

    int g = gcd(x, y);
    int l = lcm(x, y);

    printf("The gcd of %d and %d is %d\n", x, y, g);
    printf("The LCM of %d and %d is %d\n", x, y, l);

    return (0);

}

/**
 * gcd - This function calculates the greatest common factor of the two number
 * @a: first number
 * @b: second number
 * Return: a
 */
int gcd(int a, int b)
{
    int r; /*remainder*/
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

/**
 * lcm: This function calculates the lowest common multiple of the two numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int lcm(int a, int b)
{
    int n = a * b; /*numerator*/
    int d = gcd(a, b); /*denominator*/

    int result = n / d;
    return result;
}