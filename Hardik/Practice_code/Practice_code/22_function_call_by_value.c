//Example 22: Write C a program to show that when arrays or strings are passed to  a function, call by value mechanism is not followed.
#include<stdio.h>

void change(int num)
{

    printf("Before adding value inside function num=%d \n",num);

    num=num+100;

    printf("After adding value inside function num=%d \n", num);
}
int main()
{

    int num;

    printf("enter your number=");
    scanf("%d",&num);

    printf("Before function call =%d \n", num);

    //passing value in function

    change(num);

    printf("After function call =%d \n", num);

return 0;
}
