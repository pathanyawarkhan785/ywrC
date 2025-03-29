#include <stdio.h>
int main()
{
    int num;
    printf("How many line you want to print: ");
    scanf("%d", &num);
    for (int i = num; i <= num; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        if (i == 0)
        {
            break;
        }
        printf("\n");
    }
    return 0;
}