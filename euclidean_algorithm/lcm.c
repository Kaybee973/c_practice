#include <stdio.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
    int x, y, result;

    //prompt users for first number
    printf("Enter first number: ");
    scanf("%d", &x);

    //prompt users for second number
    printf("Enter second number: ");
    scanf("%d", &y);

    result = lcm(x, y);

    printf("The lcm of %d and %d = %d\n", x, y, result);

    return (0);
    
}

int gcd(int a, int b)
{
    int r; //remainder
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int lcm(int a, int b)
{
    int d = gcd(a, b); //denominator
    int n = a * b; //numerator

    return n / d;
}
