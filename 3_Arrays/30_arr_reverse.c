#include <stdio.h>

int main()

{
    int a[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    int size = sizeof(a) / sizeof(a[0]);

    for (int i = size - 1; i >= 0; i--)
        printf("%d ", a[i]);

    return 0;
}