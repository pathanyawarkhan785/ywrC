#include <stdio.h>

int fib(int n, int memo[])
{
    if (n < 2)
        return n;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    return memo[n];
}

int main()

{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int memo[n + 1];

    for (int i = 0; i <= n; i++)
        memo[i] = -1;

    for (int i = 0; i < n; i++)
        printf("%d ", fib(i, memo));

    return 0;
}