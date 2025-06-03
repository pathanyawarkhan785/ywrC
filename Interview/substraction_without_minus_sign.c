#include <stdio.h>

int main()

{
    int a = 10;
    int b = 5;

    printf("%d", a + (~b + 1)); // add variable a in 2's complement to get a-b

    return 0;
}