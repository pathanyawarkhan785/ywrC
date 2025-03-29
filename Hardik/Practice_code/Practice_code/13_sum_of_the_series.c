//Example 13: Write a program to print the sum of the series 1+2+3+4+... up to n  terms.

#include <stdio.h>
int main()
{
	int c, s=0, n;
	printf("\n Enter the No.=");
	scanf("%d", &n);
	for(c=1;c<=n; c++)
		s+=c;
	printf("\n Sum is %d", s);


	return 0;
}
