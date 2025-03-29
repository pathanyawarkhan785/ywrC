#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *leftPart = (int *)malloc(n1 * sizeof(int));
    int *rightPart = (int *)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++)
        leftPart[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        rightPart[j] = arr[mid + 1 + j];

    i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        if (leftPart[i] < rightPart[j])
        {
            arr[k] = leftPart[i];
            i++;
        }
        else
        {
            arr[k] = rightPart[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = leftPart[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = rightPart[j];
        j++;
        k++;
    }

    free(leftPart);
    free(rightPart);
}

void mergeSort(int *arr, int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}

int main()

{
    int n, i;
    printf("Enter number of element: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
