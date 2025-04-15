#include <stdio.h>

int positionOfSetBit(int num)
{
    int pos = 1;

    if ((num & (num - 1)) != 0)
        return -1;

    while ((num & 1) != 1)
    {
        num = num >> 1;
        pos += 1;
    }

    return pos;
}

int main()

{
    int num;

    printf("Enter num: ");
    scanf("%d", &num);

    int res = positionOfSetBit(num);
    printf("%d", res);

    return 0;
}