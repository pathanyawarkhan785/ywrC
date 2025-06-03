#include <stdio.h>
int main()
{
    int num;

    printf("Enter Number: ");
    scanf("%d", &num);

    if (num < 2)
    {
        printf("enter valid input.");
        return 0;
    }

    int sqrtNum = 1;

    while (sqrtNum * sqrtNum <= num)
        sqrtNum++;

    sqrtNum--;

    for (int i = 2; i <= sqrtNum; i++)
    {
        if (num % i == 0)
        {
            printf("%d is not prime.", num);
            return 0;
        }
    }

    printf("%d is prime.", num);
    return 0;
}