#include <stdio.h>

typedef struct
{
    int min;
    int max;
} findNum;

findNum minMaxNum(char arr[], int size)
{

    findNum findOne;

    findOne.max = arr[0];
    findOne.min = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (findOne.max < arr[i])
            findOne.max = arr[i];

        if (findOne.min > arr[i])
            findOne.min = arr[i];
    }

    return findOne;
}

int main()

{
    char arr[5] = {34, 54, 22, 76, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    findNum res = minMaxNum(arr, size);
    printf("%d %d", res.max, res.min);

    return 0;
}