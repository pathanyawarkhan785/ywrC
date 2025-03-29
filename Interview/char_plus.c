#include <stdio.h>

int main()

{
    char val[20];
    int i = 0, ans = 0, temp = 0, flag = 1;

    printf("Enter value: ");
    scanf("%s", &val);

    while (val[i] != '\0')
    {
        if (val[i] == '+' || val[i] == '-')
        {
            ans += temp;
            temp = 0;
            flag = (val[i] == '+') ? 1 : -1;
        }
        else
            temp = temp * 10 + (val[i] - '0') * flag;

        i++;
    }
    ans += temp;
    printf("%d", ans);

    return 0;
}
