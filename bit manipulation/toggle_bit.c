#include <stdio.h>

int main()

{
    int num = 74;
    int toggleBit = 3;
    int mask = 1 << toggleBit;

    num ^= mask;
    printf("%d", num);

    return 0;
}