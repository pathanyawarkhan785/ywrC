#include <stdio.h>

void sum(int a, int b)
{
    printf("%d\n", a + b);
}

void subtract(int a, int b)
{
    printf("%d\n", a - b);
}

int main()

{
    void (*funcPtr[])(int, int) = {sum, subtract};

    funcPtr[0](15, 10);
    funcPtr[1](51, 10);

    return 0;
}