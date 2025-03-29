#include<stdio.h>

void add(int a , int b){
    printf("%d ", a+b);
}

void sub(int a , int b){
    printf("%d ", a-b);
}

void mul(int a , int b){
    printf("%d ", a*b);
}

void div(int a , int b){
    printf("%d ", a/b);
}

void display(void (*ptr)(int , int)){
    ptr(5 , 1);
}
int main(){


    // void (*fptr[4])(int , int ) ={add , sub , mul , div};
    // fptr[0](1,2); 
    // fptr[1](1,2); 
    // fptr[2](1,2); 

    display(add);
    return 0 ; 
}