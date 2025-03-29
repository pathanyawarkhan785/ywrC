#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *listCycle(struct node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    struct node *slow = head;
    struct node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
        {
            printf("Cycle found.");
            return head;
        }
    }
    printf("Cycle not found.");
}

int main()

{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));
    struct node *sixth = (struct node *)malloc(sizeof(struct node));

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = fifth;

    fifth->data = 25;
    fifth->next = sixth;

    sixth->data = 30;
    sixth->next = fourth;

    listCycle(head);

    return 0;
}