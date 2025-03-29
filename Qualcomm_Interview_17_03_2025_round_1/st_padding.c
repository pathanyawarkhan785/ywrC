#include <stdio.h>

struct st
{
    int a : 8;
    int b : 8;
    int c : 8;
    int d : 8;
    int e : 8;
    int f : 8;
    double g;
};

// 1 0 0 0 0 0 0 0
// 1 1 1 1 1 1 1 1
// 1 0 0 0 0 0 0 0

int main()

{
    struct st stExample;
    stExample.a = 100;
    stExample.b = 100;
    stExample.c = 100;
    stExample.d = 100;

    printf("%d\n", stExample.a);
    printf("%d\n", stExample.b);
    printf("%d\n", stExample.c);
    printf("%d\n", stExample.d);

    // printf("sizeof char a: %lu\n", sizeof(stExample.a));
    // printf("sizeof int b: %lu\n", sizeof(stExample.b));
    // printf("sizeof char c: %lu\n", sizeof(stExample.c));

    printf("total: %lu\n", sizeof(stExample));

    return 0;
}