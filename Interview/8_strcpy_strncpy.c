#include <stdio.h>
#include <string.h>

// char* strcpy(char* destination, const char* source);

int main()

{

    // --- strcpy this works perfectly ---
    // char str[6] = "yawar";
    // char str2[10];

    // strcpy(str2, str);

    // // ---but if destination size is less than source it leads to buffer overflow---

    // char str[6] = "yawar";
    // char str2[4];

    // strcpy(str2, str);

    // printf("%s\n", str);
    // printf("%s\n", str2);

    // ---strncpy---

    char newStr[16] = "Hello Yawarkhan";
    char tempStr[16];

    int charToBeCopy = 7;
    strncpy(tempStr, newStr, charToBeCopy);
    tempStr[charToBeCopy] = '\0';
    printf("%s", tempStr);

    return 0;
}