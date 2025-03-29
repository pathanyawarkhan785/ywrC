#include <stdio.h>
int main()
{
    int a = 3, b = 4, pow = 1;

    for (int i = 0; i < b; i++)
    {
        pow *= a;
    }

    printf("%d", pow);

    return 0;
}