#include <stdio.h>

int main()

{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }

    return 0;
}