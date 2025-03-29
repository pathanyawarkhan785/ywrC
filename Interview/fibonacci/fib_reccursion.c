#include <stdio.h>

int fib(int n)
{
    if (n < 2)
        return n;

    return fib(n - 1) + fib(n - 2);
}

int main()

{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%d\n", fib(i));

    return 0;
}