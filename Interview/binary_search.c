#include <stdio.h>

int binarySearch(int arr[], int size, int findVal)
{
    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == findVal)
            return mid;

        if (arr[mid] < findVal)
            start = mid + 1;

        if (arr[mid] > findVal)
            end = mid - 1;
    }
    return -1;
}

int main()

{
    int arr[7] = {23, 45, 78, 90, 126, 458, 999};
    int size = sizeof(arr) / sizeof(arr[0]);
    int findVal;

    printf("Enter value to search: ");
    scanf("%d", &findVal);

    int indexOfVal = binarySearch(arr, size, findVal);

    (indexOfVal != -1) ? printf("%d found at index %d.", findVal, indexOfVal) : printf("%d not found in the array.", findVal);

    return 0;
}