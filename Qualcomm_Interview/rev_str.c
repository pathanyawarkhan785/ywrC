// IP : I love my India
// OP : I evol ym aidnI

#include <stdio.h>
#include <string.h>

void revWord(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void revStr(char str[], int len)
{
    int start = 0;

    for (int i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            revWord(str, start, i - 1);
            start = i + 1;
        }
    }
}

int main()

{
    char s[22] = "yawar pathan gujarat";
    int len = strlen(s);

    revStr(s, len);
    printf("%s", s);

    return 0;
}

// inp: 11 ( 1 0 1 1 )
// bit: 1

// 1 0 1 1 -> 11
// 1 0 0 1
// 0 0 1 0
// 1 1 0 1 (~)

// inp = inp & ~(1 << bit);
// inp = inp & (inp-1)

// 0 | 1 = 1
// 1 | 1 = 1