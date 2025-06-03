#include <stdio.h>
#include <limits.h>

int maxVal(int arr[], int size)
{
    int max = arr[0];
    // int max = INT_MIN;

    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int minVal(int arr[], int size)
{
    int min = arr[0];
    // int min = INT_MAX;

    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
            min = arr[i];
        }
    return min;
}

int main()

{
    int arr[5] = {45, 7, 34, 87, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("%d\n", maxVal(arr, size));
    printf("%d\n", minVal(arr, size));
    return 0;
}