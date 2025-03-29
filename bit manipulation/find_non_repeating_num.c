#include <stdio.h>

int nonRepeat(int arr[], int size)
{
    int res = 0;

    for (int i = 0; i < size; i++)
        res ^= arr[i];

    return res;
}

int main()

{
    int arr[7] = {1, 2, 3, 1, 3, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = nonRepeat(arr, size);
    printf("%d", res);

    return 0;
}