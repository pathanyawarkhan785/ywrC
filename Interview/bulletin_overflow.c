#include <stdio.h>

int main()
{
    int a = 2147483647;
    int b = 1;
    int result;
    int overflow = __builtin_add_overflow(a, b, &result);

    printf(overflow ? "Overflow occurred!\n" : "Result: %d\n", result);

    return 0;
}
