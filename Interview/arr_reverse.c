#include <stdio.h>

int main()

{
    int a[5] = {54, 23, 7, 34, 2};
    int size = sizeof(a) / sizeof(a[0]);
    int temp;

    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        temp = a[end];
        a[end] = a[start];
        a[start] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}