//Example 19: Write a function that computes xn, where x is any valid number and n  an integer value.
#include <stdio.h>

int main(void)
{
	int number, result;
	int num;
	printf("\n Enter the values of x and n \n");
	printf("\n x =  ");
	scanf("%d",&number);
	printf("\n num =   ");
	scanf("%d",&num);
	result=(number*num);
	printf("\n Value of x^num is %d",result);
	return 0;

}
