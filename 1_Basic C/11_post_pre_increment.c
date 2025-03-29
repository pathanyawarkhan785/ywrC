#include <stdio.h>
int main()
{
    // int x = 5, y, z;
    // y = x--;                     // first assign y = 5 then decrement x by 1 so x = 4
    // z = --x;                     // here first decrement then assign so z = 3 and x = 3
    // printf("%d %d %d", x, y, z); // 3 5 3

    int x = 4, y = 3, z;
    z = x-- - y;                 // z = 4 - 3 = 1 now decrement x by 1 so x = 3
    printf("%d %d %d", x, y, z); // 3 3 1
    return 0;
}