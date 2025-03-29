#include <stdio.h>

int main()

{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;

    // If p is an int *, adding 2 to it increments the pointer by 2 * sizeof(int) bytes.

    printf("%d\n", p);     // 6422280
    printf("%d\n", p + 2); // 6422288

    return 0;
}
