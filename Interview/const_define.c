#include <stdio.h>

#define pie 3.14

// re define macro

#undef pie

#define pie 3.22

int main()

{
    // const float pie = 3.14;
    printf("%f", pie);

    return 0;
}