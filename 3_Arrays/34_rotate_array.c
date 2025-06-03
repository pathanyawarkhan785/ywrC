#include <stdio.h>

int rotate(int a[], int l, int r)
{
    while (l < r)
    {
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }
}

int main()

{
    int a[5] = {3, 7, 4, 6, 8};
    int k = 13; // rotate 3 times
    int size = sizeof(a) / sizeof(a[0]);
    int l = 0;
    int r = size - 1;

    k = k % size;

    rotate(a, l, r);
    rotate(a, 0, k - 1);
    rotate(a, k, r);

    for (int i = 0; i < size; i++)
        printf("%d ", a[i]);

    return 0;
}