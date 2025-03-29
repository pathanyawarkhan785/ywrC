#include <stdio.h>

// int fib();

int main()

{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Please enter positive number.");
        return -1;
    }

    int first = 0;
    int second = 1;

    printf("%d ", first);

    if (n > 1)
        printf("%d ", second);

    for (int i = 2; i < n; i++)
    {
        int sum = first + second;
        first = second;
        second = sum;
        printf("%d ", sum);
    }

    return 0;
}