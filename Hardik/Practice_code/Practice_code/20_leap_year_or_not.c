//Example 20: Write a program that uses a function to check whether a given year is  a leap year or not.
#include <stdio.h>

int main ()
{
    int leap_year ;
    printf("enter your leap year=");
    scanf("%d",&leap_year);

    if ( leap_year%4 == 0)
        {
        printf("this is a leap year");
        }
     else{
        printf("the year is not a leap year");
             }
return 0;
}
