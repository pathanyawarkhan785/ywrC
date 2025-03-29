#include <stdio.h>

void rotate(int arr[], int start, int end)
{
    int temp = arr[end];
    for (int i = end; i > start; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[start] = temp;
}

void arrangeArr(int arr[], int n)
{

    int lastOddPos = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            lastOddPos++;
            if (i != lastOddPos)
            {
                rotate(arr, lastOddPos, i);
            }
        }
    }
}

int main()

{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    arrangeArr(arr, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
