#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char pass[10] = "pass";

    // The strcmp function returns 0 when the strings are equal, and a non-zero value when they are not equal
    // printf("%d", strcmp(pass, argv[1])); // output: 0

    (strcmp(pass, argv[1]) == 0) ? printf("Password matched.") : printf("Password unmatched.");

    return 0;
}
