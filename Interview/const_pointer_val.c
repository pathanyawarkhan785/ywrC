#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    // Correct declaration and initialization
    const int *const q = &a; // q is a constant pointer to a constant integer
    const int p = a;         // p is a constant integer
    int *const r = &c;       // r is a constant pointer to an integer

    // Demonstrating usage
    // *q = 15; // Error: q points to a constant integer
    // q = &b;  // Error: q is a constant pointer
    // p = b;   // Error: p is a constant integer
    *r = 25; // Valid: r points to an integer
    // r = &a;  // Error: r is a constant pointer

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);
    printf("Value of c: %d\n", c);
    printf("Value pointed by q: %d\n", *q);
    printf("Value of p: %d\n", p);
    printf("Value pointed by r: %d\n", *r);

    return 0;
}
