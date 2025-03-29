#include <stdio.h>

// here int* rename with intPTR actually its written as typedef int* intPTR but vscode automacally rearrange like this

typedef int *intPTR;

int main()

{
    int a = 5, b = 7;      // this is correct because computer reads like int a = 5 and int b = 7;
    intPTR x = &a, y = &b; // this gives error because computer reads like int *x = &a and int y = &b;

    // to solve this pointer problem use typedef int *intPTR;

    printf("%d\n", *x);
    printf("%d\n", *y);

    return 0;
}