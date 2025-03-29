#include<stdio.h> 

#define capacity 5 

int array[capacity];
int count = -1 ; 

int pop(){
    if(count == -1)
        {
            printf("stack is empty\n");
            return -1;
        }
    return array[count--];
}

void push(int data){
    if(count == capacity -1 ){
        printf("stack is full\n");
        return ; 
    }
    array[++count] = data;
}

void top(){
    if(count == -1){
        printf("stack is empty\n");
        return ; 
    }
    printf("top value is %d\n",array[count]);
}
int main(){
    // push(10);
    // push(11);
    // push(12);
    // push(11);
    // push(12);
    // push(11);
    // push(12);
    top();
    printf("%d\n", pop());
    top();
    

   return 0 ; 
}