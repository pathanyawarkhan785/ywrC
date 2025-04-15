#include <stdio.h>
#include <stdint.h>

#define ADDRESS 1000

uint32_t toggleBit(uint32_t *a, int pos)
{
    return *a ^= (1 << pos);
}

int main()

{
    uint32_t *a = (uint32_t *)ADDRESS;
    int pos = 2;

    toggleBit(a, pos);

    printf("0x%X\n", *a);
    printf("%d\n", *a);

    return 0;
}