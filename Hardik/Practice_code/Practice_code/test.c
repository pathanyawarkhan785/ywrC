#include<stdio.h> 


int main(){
 int a = 6 ; 
int b = 10 ; 
int const  *const p = &a;

 printf("%d",*p);
 
    return 0 ; 
}