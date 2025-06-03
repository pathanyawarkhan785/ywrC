#include <stdio.h>
#include <string.h>

int main()

{
    char str[15] = "Hello World!";
    char temp[10];
    int n;

    printf("How many chars you want to copy: ");
    scanf("%d", &n);

    strncpy(temp, str, n);
    temp[n] = '\0';

    printf("%s", temp);

    return 0;
}