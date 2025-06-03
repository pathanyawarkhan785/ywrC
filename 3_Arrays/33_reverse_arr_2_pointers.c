#include <stdio.h>

int main()

{
    int a[5] = {3, 7, 4, 6, 8};
    int size = sizeof(a) / sizeof(a[0]);
    int l = 0;
    int r = size - 1;

    while (l < r)
    {
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}