#include <stdio.h>

int main()

{
    int n = 3;
    int first = 0;
    int second = 1;

    if (n == 0 || n == 1)
    {
        printf("%d", n);
    }

    else
    {
        int sum = 0;
        int allSum = 0;
        for (int i = 0; i <= n; i++)
        {
            allSum += first;
            sum = first + second;
            first = second;
            second = sum;
        }
        printf("%d", allSum);
    }

    return 0;
}