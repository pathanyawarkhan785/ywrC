#include <stdio.h>

int main()

{
    int n, m;

    printf("Enter number of line: ");
    scanf("%d", &n);

    printf("Enter number of * in each line: ");
    scanf("%d", &m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("* ");

        printf("\n");
    }

    return 0;
}