#include <stdio.h>

int main()

{
    char arr[5] = {34, 54, 22, 76, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];

        if (min > arr[i])
            min = arr[i];
    }

    printf("%d %d", min, max);

    return 0;
}