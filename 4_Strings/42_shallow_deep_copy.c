#include <stdio.h>

int main()

{

    // // ---------------shallow copy-----------------------

    // char str1[] = "Hello Yawar";
    // char *str2 = str1; // here you're passing str1's reference or address to str2

    // str2[0] = 'X'; // so if you change str2 result will be affect str1 also it's called shallow copy

    // printf("%s\n", str1);
    // printf("%s\n", str2);

    // // ---------------------deep copy----------------------

    // char *str1 = "Hello yawar";
    // char *str2;
    // str2 = str1;

    // str2 = "Hi yawar";

    // printf("%s\n", str1);
    // printf("%s\n", str2);

    return 0;
}