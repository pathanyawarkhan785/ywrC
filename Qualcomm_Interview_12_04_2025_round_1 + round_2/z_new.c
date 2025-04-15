// in:  "i am in hyedrabad"
// out: "hyedrabad in am i"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void revWords(char *str, char **newStr)
{
    int len = strlen(str);
    int start = len - 1, end = len - 1;
    int outInd = 0;

    *newStr = (char *)malloc((len + 1) * sizeof(char));

    while (start >= 0)
    {
        if (str[start] == ' ' || start == 0)
        {
            int wordStart = (start == 0) ? start : start + 1;
            int wordLen = end - wordStart + 1;

            strncpy(&(*newStr)[outInd], &str[wordStart], wordLen);
            outInd += wordLen;

            if (start != 0)
            {
                (*newStr)[outInd] = ' ';
                outInd++;
            }

            end = start - 1;
        }
        start--;
    }
    (*newStr)[outInd] = '\0';
}

int main()

{
    char str[] = "i am in hyedrabad";
    char *newStr = NULL;

    revWords(str, &newStr);

    printf("%s\n", str);
    printf("%s\n", newStr);

    return 0;
}