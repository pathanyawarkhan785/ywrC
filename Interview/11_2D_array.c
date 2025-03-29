#include <stdio.h>

void printArr(int arr[4][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()

{
    int row = 4;
    int col = 3;
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printArr(arr, row, col);

    return 0;
}