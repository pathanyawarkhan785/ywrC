#include <stdio.h>

union endianness
{
    int x;
    char y[sizeof(int)];
};

int main()
{
    union endianness temp;
    temp.x = 1;

    if (temp.y[0] == 1)
    {
        printf("Little endian");
    }
    else
    {
        printf("Big endian");
    }

    return 0;
}