#include <stdio.h>

int main()

{
    int arr[6] = {1, 2, 3, 2, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Element %d is duplicate in array.", arr[i]);
                break;
            }
        }
    }

    return 0;
}