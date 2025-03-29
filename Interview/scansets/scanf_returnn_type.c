#include <stdio.h>

int main()
{
    int value;
    printf("Enter a number: ");

    int result = scanf("%d", &value);
    printf("%d\n", result);

    if (result == 1)
        printf("You entered: %d\n", value);
    else if (result == EOF)
        printf("Input error or end of file encountered.\n");
    else
        printf("Invalid input. Please enter a number.\n");

    return 0;
}
