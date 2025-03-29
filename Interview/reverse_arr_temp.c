#include <stdio.h>

int main()

{
    int a[5] = {1, 2, 3, 4, 5};
    int temp[5];

    for (int i = 0; i < 5; i++)
        temp[i] = a[5 - i - 1];

    for (int i = 0; i < 5; i++)
        printf("%d ", temp[i]);

    return 0;
}