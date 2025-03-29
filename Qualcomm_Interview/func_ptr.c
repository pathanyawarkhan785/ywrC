#include <stdio.h>

// void *sum(int val);
// void mycallFunc(int val);

void sum(int val, void (*callback)(int))
{

    // printf("val a:%d", val);
    // mycallFunc(val);
    callback(val);
}

void mycallFunc(int val)
{
    printf("%d", val);
}

int main()

{

    int val = 10;
    void (*funcPtr)(int) = mycallFunc;

    sum(val, funcPtr);

    return 0;
}