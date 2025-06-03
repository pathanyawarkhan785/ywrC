#include <stdio.h>

int singleNumber(int *nums, int numsSize)
{
    int res = 0;

    for (int i = 0; i < numsSize; i++)
        res ^= nums[i];

    return res;
}

int main()

{
    int arr[7] = {1, 2, 3, 1, 3, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = singleNumber(arr, size);
    printf("%d", res);

    return 0;
}