#include <stdio.h>
int main()
{
    // -------------for loop-------------------

    int n;
    float a = 100;

    printf("Enter Number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%.2f\n", a);
        a /= 2;
    }

    // -------------------while------------------

    // int i = 1;
    // while (i <= 10)
    // {
    //     printf("%d\n", i);
    //     i++;
    // }

    return 0;
}