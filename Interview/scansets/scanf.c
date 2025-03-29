#include <stdio.h>

int main()
{
    int a;
    char b[6];
    int res;
    char ch;

    do
    {
        printf("Enter an int: ");
        res = scanf("%d%c", &a, &ch);
        fflush(stdin);
    } while (
        res == 0 || ch != '\n');

    printf("Enter a str: ");
    scanf("%5s", b); // Ensuring only 5 characters to reserve space for null-terminator

    printf("a: %d\n", a);
    printf("b: %s\n", b);

    return 0;
}
