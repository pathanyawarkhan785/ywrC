#include <stdio.h>

int main()
{   int r ;
    printf("Enter Row value :- ");
    scanf("%d",&r);
    for (int i = 1; i <= r; i++){
        for(int j = 1 ; j<=r*2-1;j++){
            if(j>=i && j<=r*2-i)
                printf("*");
            else    
                printf(" ");
        }
        printf("\n");
    }
        return 0;
}