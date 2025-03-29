#include <stdio.h>

int main()

{
    int num = 11;
    int bit = 3;
    int mask = ~(1 << bit);

    num &= mask;
    printf("bit reseted: %d", num);
    return 0;
}