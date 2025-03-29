#include <stdio.h>

int main()

{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c ", j + 'A');
            }
        }
        printf("\n");
    }

    return 0;
}