#include <stdio.h>

int main()

{
    // const int x = 10;
    // x = 20;

    int a = 20;
    int b = 10;

    const int *p = &a;
    p = &b;
    // a = 30;
    *p = 30;

    printf("%d", a);

    return 0;
}