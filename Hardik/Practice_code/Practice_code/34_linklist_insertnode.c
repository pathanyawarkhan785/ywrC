#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data ; 
    struct node *next;
}Head;

void insertNode(Head **head,int data){
Head *temp = (Head *)malloc(sizeof(Head)); 
Head *t; 
temp->next = NULL;
temp->data = data;

if ( *head == NULL){
    *head = temp ; 
}
else{
    t = *head ;
    while (t->next != NULL)
    {
        t = t->next;
    }
    t->next = temp;
      
}

}


void printlist(Head *head){
    Head *temp = head; 
    while(head != NULL){
        printf("value is %d\n",temp->data);
        temp = temp->next;
    }
}
int main(){
    Head *start=NULL;

    while(1){

        int x = 0; 
        printf(" 1 for add data \n 2 for print data \n 3 for exit \n");
        scanf("%d",&x);
        if(x ==1 ){
            printf("add data with linklist :-");
            int data ; 
            scanf("%d",&data);
            insertNode(&start,data);
        }
        else if (x == 2 ){
            printlist(start);
        }
        else if ( x == 3){
            break;
        }
    }
    return 0 ;
}