#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 3)
            break; // Used to terminate loops early when a specific condition is met.

        printf("%d\n", i);

        if (i == 7)
            continue; // Used to skip over certain iterations when a specific condition is met.
    }

    return 0;
}