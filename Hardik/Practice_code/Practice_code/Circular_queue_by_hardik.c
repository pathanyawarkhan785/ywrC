#include<stdio.h> 

#define N 5 
int queue[N];
int front = -1 , rear = -1 ; 
void enqueue(int data){

    if((rear +1 ) % N == front){
        printf("Queue is full\n");
        return ;
    }

    if(front == -1 ){
        front = 0 ;
    }
    
    rear = (rear + 1) % N ;
    queue[rear] = data;
    printf("enqueue data is %d\n",queue[rear]);
}

int dequeue(){

    if(front == -1){
        printf("Queue is empty\n");
        return -1 ; 
    }

    int data = queue[front];

    if(front == rear){
        front = rear = -1;
    }
    else{

        front = (front + 1) % N;

    }
    return data;
}

void display(){
    if(front == -1 ){
        printf("Queue is empty ");
        return ;
    }
    printf("\n");
    int i = front ; 
    if(rear != front)
    {
    do{
        printf("%d ",queue[i]);
        i = (i + 1) % N;
    }
    while(i != rear);
    printf("%d",queue[rear]);
    }

    else{

    printf("%d",queue[rear]);
    }
}





int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    // dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    display();

    return 0 ;
}