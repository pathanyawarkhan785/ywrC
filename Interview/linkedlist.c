#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void printLinkedList(struct node *head)
{
    while (head != NULL)
    {
        printf("%d->", head->data);
        head = head->next;
    }
}

struct node *insertBegin(struct node *head)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }
    temp->data = 2;
    temp->next = head;
    head = temp;
    return head;
}

struct node *insertEnd(struct node *head)
{

    while (head->next != NULL)
    {
        head = head->next;
    }

    struct node *temp = (struct node *)malloc(sizeof(struct node));
    head->next = temp;
    temp->data = 100;
    temp->next = NULL;
    printf("value inserted.");

    return head;
}

struct node *insertBetween(struct node *head, int data)
{

    struct node *curr = head;

    while (curr != NULL && curr->data != data && curr->next != NULL)
    {
        curr = curr->next;
    }

    if (curr == NULL || (curr->next == NULL && curr->data != data))
    {
        printf("%d not found in linkedlist.", data);
        return head;
    }

    struct node *temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return head;
    }

    temp->data = 12;
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

struct node *deleteBegin(struct node *head)
{
    if (head == NULL)
    {
        printf("Linkedlist is empty.");
        return NULL;
    }

    struct node *temp = head;
    head = head->next;
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

    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    struct node *temp = curr->next;
    curr->next = NULL;
    free(temp);

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

    if (head->data = data)
    {
        head = head->next;
        free(curr);
        return head;
    }

    while (curr->next != NULL && curr->next->data != data)
    {
        curr = curr->next;
    }

    if (curr->next == NULL)
    {
        printf("%d not found in Linkedlist.", data);
        return head;
    }

    struct node *temp = curr->next;
    curr->next = curr->next->next;
    free(temp);

    return head;
}

struct node *searchVal(struct node *head, int target)
{
    if (head == NULL)
    {
        printf("Linkedlist is empty.");
        return NULL;
    }

    struct node *curr = head;

    while (curr != NULL && curr->data != target)
    {
        curr = curr->next;
    }

    if (curr != NULL)
        printf("Target value found in Linkedlist.");

    else
        printf("Target value not found in Linkedlist.");

    return curr;
}

int lengthOfLinkedlist(struct node *head)
{

    if (head == NULL)
    {
        printf("Linkedlist is empty.");
        return 0;
    }

    struct node *curr = head;
    int count = 0;
    while (curr != NULL)
    {
        count++;
        curr = curr->next;
    }

    return count;
}

struct node *middleVal(struct node *head)
{

    if (head == NULL)
    {
        printf("Linkedlist is empty.");
        return NULL;
    }

    struct node *slow = head;
    struct node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    printf("%d", slow->data);

    return head;
}

struct node *reverseLinkedlist(struct node *head)
{
    struct node *next, *prev = NULL;

    while (head)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}

struct node *reverseLinkedlistRecurssion(struct node *head)
{
    if (head == NULL)
        return NULL;

    reverseLinkedlistRecurssion(head->next);
    printf("%d", head->data);
}

int main()

{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = NULL;

    // printLinkedList(head);

    head = insertBegin(head);
    // printLinkedList(head);

    /*
    Here 's why you don' t need to update the head while inserting at the end :

    1.Head remains the same : The head pointer always points to the first node of the list.When you add a new node at the end, the starting point of the list doesn't change.

    2.Traversal from head : To find the last node, you start at the head and traverse the list.Once you find the last node, you update its next pointer to point to the new node.
    */

    // insertEnd(head);
    // printLinkedList(head);

    // head = insertBetween(head, 10);
    // printLinkedList(head);

    // head = deleteBegin(head);
    // printLinkedList(head);

    // deleteEnd(head);
    // printLinkedList(head);

    // head = deleteBetween(head, 15);
    // printLinkedList(head);

    // searchVal(head, 12);

    // int length = lengthOfLinkedlist(head);
    // printf("%d", length);

    // middleVal(head);

    // head = reverseLinkedlist(head);
    // printLinkedList(head);

    // reverseLinkedlistRecurssion(head);

    return 0;
}