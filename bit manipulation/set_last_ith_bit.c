#include <stdio.h>

int main()

{
    int num = 8;
    int bit = 2;
    int mask = (1 << bit) - 1;

    num |= mask;
    printf("%d", num);

    return 0;
}