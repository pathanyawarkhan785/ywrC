#include <stdio.h>

int callByVal(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}

int callByRef(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

    printf("%d\n", *a);
    printf("%d\n", *b);

    return 0;
}

int main()

{

    int a = 10;
    int b = 20;

    // ------------------call by value---------------------

    // callByVal(a, b); // directly passing value

    // // here after swapping original values remain same

    // printf("%d\n", a);
    // printf("%d\n", b);

    // ------------------call by reference---------------------

    callByRef(&a, &b);

    // after function call original values also changed.
    printf("--------After Function call----------------\n");

    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}