#include<stdio.h> 

int fibonacci(int x){
    if(x < 2)
        return x ;
    return (fibonacci(x -1 ) + fibonacci(x - 2));
}

int main(){

    // int first = 0 ; 
    // int second = 1; 
    // int third = first + second;


    // printf("%d %d ",first , second);
    
    // for(int i = 0 ; i < 10 ; i++){
    //     printf("%d ",third);
    //     first = second; 
    //     second = third ; 
    //     third = first + second;
    // }

    for(int i = 0 ; i < 10 ; i++){
        printf("%d ",fibonacci(i));
    } 


    return 0 ;
}