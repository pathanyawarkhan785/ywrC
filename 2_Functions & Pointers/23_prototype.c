#include <stdio.h>

// A function prototype in C is a function declaration specifying the function's return type, name, and the number and types of its parameters

int main()

{
    int india();
    india();
    return 0;
}

int australia()
{
    printf("Hello Australia\n");
    int england(); // just declare function first before calling it's called prototype
    england();
}

int england()
{
    printf("Hello England\n");
}

int india()
{
    printf("Hello India\n");
    int australia();
    australia();
}