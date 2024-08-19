#include <stdio.h>\

int gcd(int a, int b);
int lcm(int a, int b);

/**
 * main - Entry point
 * Description: This program takes the value of two unequal products and prints the amount of packages needed to be equal
 * Return: Always 0 (success)
 */
int main(void)
{
    int x, y;

    //prompt users for the value of product x
    printf("Enter 'X' value: ");
    scanf("%d", &x);

    //prompt users for the value of product y
    printf("Enter 'Y' value: ");
    scanf("%d", &y);

    int l = lcm(x, y);//lowest common multiple

    /*Number of packages needed for the products to be equal*/
    int i = l / x; //product 1 package
    int j = l / y; //product 2 package

    printf("%d of X product and %d of Y product is needed to be equal\n", i, j);
    return (0);
}


/**
 * gcd - This function calculates the highest common factor of two peoducts
 * @a: product 1
 * @b: product 2
 * Return: a
 */
int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b; //remainder
        a = b;
        b = r;
    }
    return a;
}

/**
 * lcm - This function calculates the lowest common multiple of the two products
 * @a: product 1
 * @b: product 2
 * Return: result
 */
int lcm(int a, int b)
{
    int n = a * b; //numerator
    int d = gcd(a, b);//denominator

    int result = n / d;
    return result;
}