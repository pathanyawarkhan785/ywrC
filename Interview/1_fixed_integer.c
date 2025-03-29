#include <stdio.h>
#include <stdint.h>

int main()

{
    int32_t a = 10; // Here, the int value always relies on 32 bits, no matter which architecture you use.
    printf("%d", a);
    return 0;
}