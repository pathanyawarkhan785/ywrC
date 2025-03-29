#include <stdio.h>
int main()
{
    char str[10];

    // here we are taking input via gets because scanf doesn't count blank spaces
    gets(str);

    // methods of printing string
    // usinf printf
    printf("%s", str);

    return 0;
}