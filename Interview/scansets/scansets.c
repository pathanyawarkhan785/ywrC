#include <stdio.h>

#define buffer 1024

int main()

{
    char items[buffer];
    int delim;
    int itemCount = 0;

    while (scanf("%[^,\n]%c", items, &delim) != EOF)
    {
        printf("%s\n", items);
    }

    return 0;
}