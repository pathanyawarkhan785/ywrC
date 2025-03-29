#include <stdio.h>
#include <assert.h>

int main()

{
    int a;
    printf("Enter value of a: ");
    scanf("%d", &a);

    assert(a > 5);

    printf("%d", a);

    return 0;
}