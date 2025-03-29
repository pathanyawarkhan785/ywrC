#include <stdio.h>

int main()

{
    // int a[3] = {1, 2, 3};
    // printf("%d\n", a[1]);

    // float b[3] = {1.2, 2.3, 3.4};
    // printf("%f\n", b[1]);

    // char c[3] = {'a', 'b', 'c'};
    // printf("%c\n", c[2]);

    // ------Taking Input & Printing array------

    // int arr[5];
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter value %d: ", i + 1);
    //     scanf("%d", &arr[i]);
    // }
    // for (int i = 0; i < 5; i++)
    //     printf("%d ", arr[i]);

    int arr[5] = {40, 30, 45, 38, 42};

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < 35)
        {
            printf("%d ", i);
        }
    }

    return 0;
}