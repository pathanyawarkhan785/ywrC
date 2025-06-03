#include <stdio.h>
#include <stdbool.h>

int main()

{
    int a[7] = {1, 2, 300, 4, 10, 100, 300};
    int maxElement = 1000;
    bool hash[maxElement + 1];

    for (int i = 0; i <= maxElement; i++)
        hash[i] = false;

    for (int i = 0; i < 7; i++)
    {
        if (hash[a[i]])
        {
            printf("Element found.");
            return 0;
        }
        else
            hash[a[i]] = true;
    }

    printf("No duplicate found.");

    return 0;
}