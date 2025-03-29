#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int add = sum(5, 3);
    printf("%d", add);
    return 0;
}