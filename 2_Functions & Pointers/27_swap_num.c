#include <stdio.h>

int main()

{
    int a = 10;
    int b = 20;

    // --------------------------with 3rd variable-----------------------

    // int temp;

    // printf("Before\n");

    // printf("%d\n", a);
    // printf("%d\n", b);

    // temp = b;
    // b = a;
    // a = temp;

    // printf("After\n");

    // printf("%d\n", a);
    // printf("%d\n", b);

    // ----------------------without 3rd variable------------------------

    a = a + b;
    b = a - b;
    a = a - b;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}