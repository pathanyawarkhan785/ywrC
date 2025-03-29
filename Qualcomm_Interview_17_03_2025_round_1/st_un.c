#include <stdio.h>

int main()

{

    // struct st
    // {
    //     int a;  // 4 bytes
    //     char b; // 1 bytes
    // }; // 5 bytes

    union un1
    {
        int a;  // 4 bytes
        char b; // 1 bytes
    }; // 4 bytes

    union un1 unIns;

    unIns.a = 4;
    unIns.b = 'a';

    printf("%d", unIns.a);

    return 0;
}