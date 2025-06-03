#include <stdio.h>

int main()

{
    // --------pointer to a constant integer-----------

    int a = 5;
    int b = 7;

    // both the declarations are correct

    // int const *ptrA = &a;
    const int *ptrA = &a;

    ptrA = &b;  // allowed
    *ptrA = 10; // not allowed

    printf("%d", *ptrA);

    -- -- -- -- -- -- -- -- -constant pointer-- -- -- -- -- -- -- --

                            int c = 10;
    int d = 20;
    int *const ptrC = &c;

    ptrC = &d;  // not allowed
    *ptrC = 40; // allowed

    printf("%d\n", *ptrC);

    // --------------------constant pointer to constant integer-----------

    int e = 30;
    int f = 50;

    const int *const ptrE = &e;

    printf("%d", *ptrE);
    *ptrE = 100; // not allowed
    ptrE = &f;   // not  allowed

    return 0;
}