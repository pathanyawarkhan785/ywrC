#include <stdio.h>

int main()

{
    int num = 44;
    int bit = 2;
    int mask = (~0) << bit;
    num &= mask;
    printf("%d\n", num);
    // printf("%d\n", mask);

    return 0;
}