#include <stdio.h>
int main()
{
    int n = 123;
    int revNum = 0;

    while (n > 0)
    {
        revNum *= 10;
        revNum += (n % 10);
        n /= 10;
    }

    printf("%d", revNum + n);

    return 0;
}