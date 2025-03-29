#include<stdio.h> 
#include<stdbool.h> 
#include<stdint.h> 

#define SETBIT(variable , bit_position) variable |= (1 << bit_position)
#define DATA "hardik" 

union endianness{
    int n ; 
    char c[sizeof(int)];
}temp;

void setbit(int *data , int index ){
    *data = *data | (1 << index);
}

void clearbit(int *data , int index){
    *data &= ~(1 << index);
}

void flipbit(int *data , int index){
    *data ^= (1 << index);
}

unsigned int rangeToggle(unsigned int num, unsigned int i , unsigned int j)
{
  return num ^((1<<(j-i+1))-1)<<i;
}

bool checkbitsetornot(int * data , int index){
    if((*data & (1 << index) ) != 0)
        return true ; 
    else 
        return false ; 
}

void removelastbit(int *data){
    *data = *data & (*data - 1 );
}

int numberofsetbit(int *data){
    int count  = 0 ;
    while(*data != 0 ){
        count++; 
        *data &= *data -1 ; 
    }
    return count;
}

void swap_ood_even(uint8_t *data){
    *data = (*data & 0xAA) >> 1 | (*data & 0x55) << 1; 
}

int main(){
    int x = 0x7F , y = 10 ; 
    // SETBIT(x , 2);
    // printf("set bit %d \n", SETBIT(x , 2));
    // removelastbit(&x);
    // swap_ood_even(&x);
    // printf("%d " , x);
    // printf("%x",  rangeToggle(x , 4 , 7));
    printf("%d", checkbitsetornot(&x , 5));
    return 0 ; 
}