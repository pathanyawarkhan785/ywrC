#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    // int ptr;
};

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct node *top)
{
    struct node *temp = (struct node *)(malloc(sizeof(struct node)));
    if (temp == NULL)
    {
        printf("Stack full.");
        exit(0);
    }
    return 0;
}

struct node *push(struct node *top, int data)
{
    if (isFull(top))
    {
        printf("Stack overflow");
        return NULL;
    }

    struct node *temp = (struct node *)(malloc(sizeof(struct node)));
    temp->data = data;
    temp->next = top;
    top = temp;
    return top;
}

void printStack(struct node *top)
{
    while (top != NULL)
    {
        printf("%d\n", top->data);
        top = top->next;
    }
}

struct node *pop(struct node **top)
{
    if (isEmpty(*top))
    {
        printf("Stack is empty.");
        return NULL;
    }

    struct node *temp = *top;
    *top = (*top)->next;
    free(temp);
    return *top;
}

int peek(struct node *top)
{
    if (isEmpty(top))
    {
        printf("Stack is empty.");
        return 0;
    }

    return top->data;
}

int stackBottom(struct node *top)
{

    if (isEmpty(top))
    {
        printf("Stack is empty.");
        return 0;
    }

    struct node *temp = top;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    return temp->data;
}

int main()

{

    struct node *top = NULL;

    top = push(top, 5);
    top = push(top, 10);
    top = push(top, 15);
    top = push(top, 20);

    // printStack(top);

    // top = pop(&top);
    // top = pop(&top);

    // printStack(top);

    // int peekVal = peek(top);
    // printf("%d", peekVal);

    int bottomVal = stackBottom(top);
    printf("%d", bottomVal);

    return 0;
}