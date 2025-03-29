#include <stdio.h>
#include <stdbool.h>

int main()

{
    int arr[8] = {1, 2, 9, 1, 2, 1, 4, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        bool flag = false;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }

        if (flag == false)
        {
            printf("%d is unique in the array.", arr[i]);
            break;
        }
    }

    return 0;
}