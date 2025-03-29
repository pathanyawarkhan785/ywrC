#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()

{
    int a[9] = {2, 7, 4, 8, 6, 9, 1, 5, 3};
    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
                swap(&a[j], &a[j + 1]);
        }
    }

    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);

    return 0;
}