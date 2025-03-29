#include <stdio.h>
#include <limits.h> // INT_MIN, INT_MAX etc... are defined in this header.

int main() {
    int A = INT_MAX, B = 3, C;
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    
    if (__builtin_add_overflow(A, B, &C)) {
        /* If the sum (A + B) overflows/underflows, this if the condition evaluates to true. */
        printf("Overflow/Underflow detected in (A + B)\n");
        return 1;
    }
    printf("A + B = %d\n", C);
    
    if (__builtin_mul_overflow(A, B, &C)) {
        /* If the product (A * B) overflows/underflows, this if condition evaluates to true. */
        printf("Overflow/Underflow detected in (A * B)\n");
        return 1;
    }
    printf("A * B = %d\n", C);
    return 0;
}
