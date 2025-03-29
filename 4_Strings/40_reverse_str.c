#include <stdio.h>
#include <string.h>

int main()

{
    char str[20];
    int size = 0;
    int i = 0;

    gets(str);

    while (str[i] != '\0')
    {
        size++;
        i++;
    }

    for (int i = 0, j = size - 1; i <= j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts(str);

    return 0;
}