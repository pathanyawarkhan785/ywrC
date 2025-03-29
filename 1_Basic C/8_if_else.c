#include <stdio.h>
int main()

{
    // ternary operator
    // int x = 5;
    // x % 2 == 0 ? printf("Even") : printf("Odd");

    int a = 65;
    char b = 'A';
    // ans is True because ascii of A is 65 so it compare ascii values
    // if (a == b)
    //     printf("True");
    // else
    //     printf("False");

    int x;
    if (x = 5)
        printf("True\n");
    else
        printf("False\n");

    if (5)
        printf("True\n");
    else
        printf("False\n");

    if (x = 0)
        printf("True\n");
    else
        printf("False\n");
    // only x = 0 is false value
    // but x > 0 or x < 0 is true value so return true
    if (-5)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}