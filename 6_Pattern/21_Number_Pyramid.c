#include <stdio.h>

int main()

{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            printf("  ");
        }

        for (int k = 0; k < (2 * i) + 1; k++)
        {
            printf("%d ", k + 1);
        }

        printf("\n");
    }

    return 0;
}