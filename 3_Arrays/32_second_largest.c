#include <stdio.h>
#include <limits.h>

int main()

{
    int arr[10] = {45, 77, 34, 77, 87, 85, 4, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    int secondMax = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            secondMax = max;
            max = arr[i];
        }

        else if (secondMax < arr[i] && max != arr[i])
        {
            secondMax = arr[i];
        }
    }

    printf("%d", secondMax);

    return 0;
}