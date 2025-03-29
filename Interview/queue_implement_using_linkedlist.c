#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *printList(struct node *front)
{
    while (front != NULL)
    {
        printf("%d\n", front->data);
        front = front->next;
    }
}

void *enqueue(struct node **front, struct node **rear, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("Memory not allocated.");
        return NULL;
    }

    temp->data = data;
    temp->next = NULL;

    if (*front == NULL)
    {
        *front = *rear = temp;
    }
    else
    {

        (*rear)->next = temp;
        *rear = temp;
    }
}

void *dequeue(struct node **front)
{
    if (front == NULL)
    {
        printf("Queue is empty.");
        return NULL;
    }

    struct node *temp = *front;
    *front = (*front)->next;
    free(temp);
}

int main()

{
    struct node *front = NULL;
    struct node *rear = NULL;

    enqueue(&front, &rear, 5);
    enqueue(&front, &rear, 10);
    enqueue(&front, &rear, 15);

    dequeue(&front);
    dequeue(&front);

    printList(front);

    return 0;
}