#include<stdio.h> 

void reversearray(int * array , int arraysize){
    for(int i = 0 ; i < arraysize /2 ; i++){
        array[i] = array[i] ^ array[arraysize - i - 1];
        array[arraysize - i - 1] = array[i] ^ array[arraysize - i - 1];
        array[i] = array[i] ^ array[arraysize - i - 1];
    }
}
void arrayprint(int * array ){
    for(int i = 0 ; i < 10 ; i++){
        printf("%d ", array[i]);
    }
}

void sortingarray(int *array , int arraysize){
    for(int i = 0 ; i < arraysize - 1 ; i++){
        for (int j = 0 ; j < arraysize - i - 1 ; j++){
            if(array[j] > array[j + 1 ]){
                array[j] = array[j] ^ array[j+1];
                array[j + 1] = array[j] ^ array[j+1];
                array[j] = array[j] ^ array[j+1];
            }
        }
    }
}

int main(){
    int temp[10] = { 1 , 2, 3, 4, 5, 6, 7,8,9,10};
    reversearray(temp , 10 );
    arrayprint(temp);
    sortingarray(temp , 10);
    arrayprint(temp);
    return 0 ; 
}