// n & (n-1)

// #include <stdio.h>
// #include <assert.h>

// // 0 1 1->3 0 1 0->2 0 1 0->2

// //     1 2 4 8 16 32

// int main()

// {
//     int a = 16;

//     assert(a > 1);

//     a &= (a - 1);

//     if (a == 0)
//         printf("num is power of 2.");
//     else
//         printf("not power of two.");

//     // printf("%d", a);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     // int a = 5;
//     int *ptr = NULL;
//     // int *ptr = &a;

//     *ptr = 10;

//     printf("Value: %d\n", *ptr);

//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str1[5] = "Hello";
//     // char str1[6] = "Hello"; '\0'
//     char str2[5];
//     strcpy(str2, str1);
//     printf("Copied string: %s\n", str2);
//     return 0;
// }

// Data Memory Barrier, Data Synchronization Barrier, and Instruction Synchronization Barrier.

// ++i
// i+1

// x = 5;

// y =x++;
// y = 6;
// x = 6

// i+1
// mov eax, [i]
// add eax,1

// ++i
// inc dword ptr[i] // memory loc
// mov eax, [i]

#include <stdio.h>

int main()
// 1 0 1 << 5
// 1 0 1 0 0 0 -> 40 + 5 -> 45
{
    int a = 5;

    printf("%d", (a << 3) + a);

    // printf("%d", a * 9);

    return 0;
}