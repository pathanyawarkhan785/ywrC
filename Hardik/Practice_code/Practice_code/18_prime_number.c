//Example 18: Write a program for printing prime numbers between 1 and 100.
#include <stdio.h>

int main()
{
    int num=1, sum, count;


            while(num<=100)
            {
                count = 0;
                sum=2;
                while(sum<=num/2)
                            {
                            if(num%sum==0)
                                                {
                                                    count++;
                                                    break;
                                                }
                                        sum++;
                                                }
                                                    if (count==0 && num !=1)
                                                        {
                                                        printf("%d,",num);
                                                        }
                                        num++;
                            }
        return 0;
}
