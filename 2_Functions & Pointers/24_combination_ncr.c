#include <stdio.h>

// combination sum formula:-  n! / (r! * (n - r)!)

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

    int n = 7;
    int r = 3;

    printf("%d", factorial(n) / (factorial(r) * factorial(n - r)));
    return 0;
}