#include <stdio.h>

int positionOfSetBit(int num)
{

    if (num == 0)
        return -1;

    int pos = 1;

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