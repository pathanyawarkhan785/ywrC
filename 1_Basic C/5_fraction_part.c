#include <stdio.h>
int main()
{
    float x = 7.86;
    int y = x;
    // printf("%d", y); // 7 will be stored
    float z = x - y;

    printf("%f", z);
    return 0;
}