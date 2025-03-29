#include <stdio.h>
int main()
{
    int n = 5;
    int fact = 1;

    while (n > 0)
    {
        fact *= n;
        n--;
    }

    printf("%d", fact);

    return 0;
}