#include <stdio.h>

int main()
{
    int n = 370;
    int org = n;
    int cube = 0;

    while (n > 0)
    {
        cube += (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }

    if (org == cube)
        printf("%d is Armstrong Number.", org);
    else
        printf("%d is not Armstrong Number.", org);

    return 0;
}