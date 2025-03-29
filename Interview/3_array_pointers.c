#include <stdio.h>

int main()

{

    int arr[10];

    // no need to write &a because it automatically passes adress in array/string
    int *p = arr;
    // arr itself is a pointer to the first element

    arr[1] = 121;
    p[2] = 23;

    printf("%d\n", arr[1]);

    printf("%d\n", p[2]);
    printf("%d\n", arr[2]);

    return 0;
}