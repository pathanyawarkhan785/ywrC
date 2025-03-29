#include <stdio.h>

int main()

{
    // this both are same & also gives same result
    // char str1[] = {'y', 'a', 'w', 'a', 'r', '\0'}; // long way
    // char str2[] = "yawar";                         // easy and shorthand way

    // printf("%c", str1[0]);

    // int i = 0;
    // while (str1[i] != '\0')
    // {
    //     printf("%c", *(str1 + i));
    //     i++;
    // }

    // taking input in string

    char str[10]; // while declaration needs to put size without size it doesn't work.

    // -------------1.using scanf------------

    // scanf("%s", str); // but it stores only first word not whole string also no need to use "&" sign because same as array it passes address by-default.
    // printf("str: %s", str);

    // -------------2.using gets for input & puts for output------------

    gets(str); // take whole string as an input
    puts(str); // print whole string as an output

    return 0;
}