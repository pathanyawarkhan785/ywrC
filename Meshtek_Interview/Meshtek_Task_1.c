#include <stdio.h>

int main()
{
    int num, loopCount;

    do
    {
        printf("Enter a number from 1 to 10: ");
        scanf("%d", &num);
        if (num < 1 || num > 10)
        {
            printf("Number must be from 1 to 10 only.\n");
        }
    } while (num < 1 || num > 10);

    loopCount = (num % 2 == 0) ? num - 1 : num;

    printf("Input: %d\n", num);
    printf("Loop Count: %d\n", loopCount);

    for (int i = 1; i <= loopCount; i++)
    {
        int blankSpace = (i <= (loopCount + 1) / 2) ? (i - 1) : (loopCount - i);
        int stars = loopCount - 2 * blankSpace;

        printf("%*s", blankSpace * 2, "");
        for (int k = 0; k < stars; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
