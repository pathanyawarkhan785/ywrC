#include <stdio.h>
int main()
{
    int n = 9;
    int first = 0;
    int second = 1;
    int temp;

    for (int i = 0; i < n; i++)
    {
        temp = first + second;
        first = second;
        second = temp;
    }

    printf("%d\n", temp);

    return 0;
}