#include <stdio.h>

int main()

{
    int num = 11;
    int bit = 2;
    int mask = 1 << bit;

    num |= mask;

    printf("%d", num);
    return 0;
}