#include<stdio.h> 


void externfun(void){
    extern int x ; 
    x = 10 ; 
    printf("%d ",x); 
    
}
int x ;
int main(){
    externfun();
    return 0 ; 
}