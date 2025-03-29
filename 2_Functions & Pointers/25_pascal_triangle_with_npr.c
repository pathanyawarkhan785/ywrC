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
    int n = 5;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", factorial(i) / (factorial(j) * factorial(i - j)));
        }
        printf("\n");
    }

    return 0;
}
