#include <stdio.h>

int main()

{
    char str1[] = "ywar"; // insert a at index 1
    int ind = 1;
    int size = (sizeof(str1) / sizeof(str1[0])) - 1;

    for (int i = size; i >= ind; i--)
    {
        str1[i + 1] = str1[i];
    }

    str1[ind] = 'a';
    printf("%s", str1);

    return 0;
}