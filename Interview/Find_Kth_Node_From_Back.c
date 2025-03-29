#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *kthNode(struct node *head, int ind)
{
    struct node *fast = head;
    struct node *slow = head;

    for (int i = 0; i < ind; i++)
        fast = fast->next;

    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }

    printf("%d", slow->data);
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

    kthNode(head, 2);

    return 0;
}

// 5 10 15 20

// 2 -> 15
// 4 -> 5