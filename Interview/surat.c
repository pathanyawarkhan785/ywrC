#include <stdio.h>
#include <string.h>

int main()
{
    char s[6] = "surat";
    int len = strlen(s);

    for (int i = 0; i < len; i++)
    {
        if (i % 2 == 0)
        {
            s[i] = '1' + i;
        }
    }

    printf("%s", s);

    return 0;
}
