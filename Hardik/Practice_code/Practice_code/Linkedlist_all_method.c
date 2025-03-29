#include<stdio.h> 
#include<stdlib.h>
#include<stdbool.h> 

typedef struct node{
    int data; 
    struct node *next ;
}Node ;

Node *add_node_at_last(Node *head , int value){
    Node *temp =(Node *)malloc(sizeof(Node));
    Node *loop = head;
    temp->data = value;
    temp->next = NULL;
    
    if(head == NULL){
        head = temp;
    }
    else{
        while(loop->next != NULL){
            loop = loop->next;
        }
        loop->next = temp;

    }
    return head;

}

Node *add_at_first(Node *head , int value){
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = value;
    temp->next = head;

    return temp;
}

int middle(Node *head){

    if(head == NULL)
        {
            printf("List is empty");
            return -1 ;
        }
    Node *slow = head , *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

bool findloop(Node *head){

    if(head == NULL)
        {
            printf("List is empty");
            return -1 ;
        }
    Node *slow = head , *fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast)
            return true;
    }
    return false;
}

Node *reverse_list(Node * head){
    Node *cur = head , *next = NULL , *pre = NULL; 

    while(cur != NULL){
        next = cur->next; 
        cur->next = pre ;
        pre = cur ;
        cur = next ;
    }
    return pre; 
}

void listprint(Node *head){
    Node *temp = head;
    while(temp){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(){
    Node *Head = NULL;
    Head = add_at_first(Head , 2);
    Head = add_node_at_last(Head , 1);
    Head = add_node_at_last(Head , 2);
    Head = add_node_at_last(Head , 3);
    listprint(Head);
    printf("\n");
    Head = reverse_list(Head);
    listprint(Head);
    // printf("\n%d ",middle(Head));
    // Head->next->next->next->next = Head->next;
    // printf("Loop is found or not %d",findloop(Head));

    return 0;
}