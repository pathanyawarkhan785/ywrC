#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void printDblList(struct node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
}

struct node *insBegin(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = 2;
    temp->prev = NULL;
    temp->next = head;
    head->prev = temp;

    return temp;
}

struct node *insEnd(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = 100;
    temp->next = NULL;

    if (head == NULL)
    {
        temp->prev = NULL;
        return temp;
    }

    struct node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->next = temp;
    temp->prev = curr;

    return head;
}

struct node *insBetween(struct node *head, int data)
{

    if (head == NULL)
    {
        return NULL;
    }

    struct node *curr = head;

    while (curr->data != data && curr->next != NULL)
    {
        curr = curr->next;
    }

    if (curr->data != data && curr->next == NULL)
    {
        printf("%d not found in linkedlist.\n", data);
        return head;
    }

    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = 12;
    temp->prev = curr;
    temp->next = curr->next;

    if (curr->next != NULL)
    {
        curr->next->prev = temp;
    }

    curr->next = temp;

    return head;
}

struct node *deleteBegin(struct node *head)
{
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
    return head;
}

struct node *deleteEnd(struct node *head)
{

    if (head == NULL)
    {
        printf("Linkedlist is empty.");
        return NULL;
    }

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->prev->next = NULL;
    free(curr);

    return head;
}

struct node *deleteBetween(struct node *head, int data)
{
    if (head == NULL)
    {
        printf("Linkedlist is empty.");
        return NULL;
    }

    struct node *curr = head;

    while (curr != NULL && curr->data != data)
    {
        curr = curr->next;
    }

    if (curr == NULL)
    {
        printf("%d not found in linkedlist.", data);
        return head;
    }

    if (curr == head)
    {
        head = curr->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        free(curr);
        return head;
    }

    if (curr->next != NULL)
    {
        curr->next->prev = curr->prev;
    }

    if (curr->prev != NULL)
    {
        curr->prev->next = curr->next;
    }

    free(curr);
    return head;
}

void reverseList(struct node *head)
{
    struct node *curr = head;

    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    while (curr != NULL)
    {
        printf("%d->", curr->data);
        curr = curr->prev;
    }
}

int main()

{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->prev = NULL;
    head->next = second;

    second->data = 10;
    second->prev = head;
    second->next = third;

    third->data = 15;
    third->prev = second;
    third->next = fourth;

    fourth->data = 20;
    fourth->prev = third;
    fourth->next = NULL;

    // printDblList(head);

    // head = insBegin(head);
    // printDblList(head);

    // head = insEnd(head);
    // printDblList(head);

    // head = insBetween(head, 10);
    // printDblList(head);

    // head = deleteBegin(head);
    // printDblList(head);

    // head = deleteEnd(head);
    // printDblList(head);

    // head = deleteBetween(head, 15);
    // printDblList(head);

    // reverseList(head);

    return 0;
}