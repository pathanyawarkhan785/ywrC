#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    struct node *next;
    int data;
};

bool isVal(struct node *head, struct node *temp)
{
    struct node *curr = head;
    while (curr != temp)
    {
        if (curr->data == temp->data)
        {
            return true;
        }
        curr = curr->next;
    }
    return false;
};

struct node *DeleteRedundant(struct node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    struct node *curr = head;
    struct node *prev = NULL;

    while (curr != NULL)
    {
        if (isVal(head, curr) && curr != head)
        {
            prev->next = curr->next;
            free(curr);
        }
        else
        {
            prev = curr;
        }
        curr = prev->next;
    }
    return head;
}

void printList(struct node *head)
{
    struct node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
}

int main(void)
{
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    struct node *fourth = malloc(sizeof(struct node));
    struct node *fifth = malloc(sizeof(struct node));
    struct node *sixth = malloc(sizeof(struct node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = fifth;

    fifth->data = 4;
    fifth->next = sixth;

    sixth->data = 2;
    sixth->next = NULL;

    // int res = isVal(head,3);
    // printf("%d",res);

    DeleteRedundant(head);
    printList(head);

    return 0;
}

// Please implement a function to delete all the redundant nodes in a singly linked list.

// redundant node means the node has the same data value

// for example:
// 1 -> 2 -> 3 -> 2-> 4 -> 2   => 1->2->3->4