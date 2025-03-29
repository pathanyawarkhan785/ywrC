#include <stdio.h>
#include <stdbool.h>

int main()

{
    int arr[3] = {12, 56, 32};
    int size = sizeof(arr) / sizeof(arr[0]);
    int findElem = 32;
    bool flag = false;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == findElem)
        {
            flag = true;
            break;
        }
    }

    flag ? printf("Element found.") : printf("Element not found.");

    return 0;
}