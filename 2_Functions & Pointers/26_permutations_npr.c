#include <stdio.h>

// npr formula:- n! / (n-r)!

int factorial(int num)
{
    int temp = 1;
    for (int i = 2; i <= num; i++)
    {
        temp *= i;
    };
    return temp;
}

int main()

{
    int n = 4;
    int r = 2;

    int npr = factorial(n) / factorial(n - r);
    printf("%d", npr);

    return 0;
}