#include <stdio.h>

int main()

{
    int val, count = 0;

    printf("Enter val: ");
    scanf("%d", &val);

    while (val > 0)
    {
        if ((val & 1) == 1)
            count++;

        val = val >> 1;
    }

    printf("set bit: %d\n", count);

    return 0;
}