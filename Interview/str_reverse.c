#include <stdio.h>
#include <string.h>

int main()

{
    char str[6] = "yawar";
    int size = strlen(str);

    char temp;
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        temp = str[end];
        str[end] = str[start];
        str[start] = temp;
        start++;
        end--;
    }

    printf("%s", str);

    return 0;
}