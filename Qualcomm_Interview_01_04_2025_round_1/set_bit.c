#include <stdio.h>
#include <stdint.h>

// uint32_t x = 7;

int main()

{
    int a = 11;
    int bit;

    printf("Enter bit you want to set: ");
    scanf("%d", &bit);

    bit = 1 << bit;

    // printf("%d", bit);
    a |= bit;

    printf("%d", a);

    // 8 4 2 1
    // 1 0 1 1 -> 11
    // 1 1 1 1 -> 15

    return 0;
}