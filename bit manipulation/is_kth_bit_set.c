#include <stdio.h>

int main()

{
    int num = 11;
    int checkBit = 2;
    int mask = 1 << checkBit;

    if (num & mask > 0)
    {
        printf("Bit set.");
        return 0;
    }
    else
    {
        printf("Bit not set.");
    }
    return 0;
}