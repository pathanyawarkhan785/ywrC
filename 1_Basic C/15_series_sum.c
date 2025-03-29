#include <stdio.h>

int main()
{
    int n = 6;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum -= i;

        else
            sum += i;
    }

    printf("%d", sum);

    return 0;
}