#include<stdio.h> 
#include<limits.h> 

void add(int a , int b){
    printf("%d ",a+b);
}
int main(){
    void (*cal)(int , int ) = &add;
   (*cal)(10,20);
    return 0 ;
}