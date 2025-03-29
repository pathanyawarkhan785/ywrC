#include <stdio.h>

int main()

{
    int arr[10] = {1, 2, 3, 4, 5, 10, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int allSum = (size / 2) * (size + 1);

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    printf("%d", allSum - sum);

    return 0;
}