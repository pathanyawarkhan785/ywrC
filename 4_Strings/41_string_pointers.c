#include <stdio.h>

int main()

{
    char str[30] = "Hello yawar";
    char *ptr = str; // same as array:- ptr is pointing to first char of string.
    int i = 0;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        i++;
        ptr++;
    }

    return 0;
}