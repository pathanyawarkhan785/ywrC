#include <stdio.h>
#include <math.h>

int main()
{
    int digits = 878312;

    digits = log10(digits) + 1;
    printf("%d\n", digits);

    return 0;
}