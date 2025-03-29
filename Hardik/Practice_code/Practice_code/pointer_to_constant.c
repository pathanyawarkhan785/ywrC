#include<stdio.h> 
#include<limits.h> 

int main(){
    // Both arw the same int const or const int
    int const x = 10 ; 
    const int y = 20 ; 


    const int * const p ; // we can not change the int value as well as pointer value
    const int * p ; // we can not change int value through the pointer but we can change pointer to pointing 
    int * const *p ; // we can not change pointer value but we can change int value throught the pointer    
    return 0 ; 
}