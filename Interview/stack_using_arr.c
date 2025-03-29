#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow.");
    }
    else
    {
        top++;
        stack[top] = val;
    }
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is empty.");
        return -1;
    }
    int val = stack[top];
    top--;
    return val;
}

int peek()
{
    if (top == -1)
    {
        printf("Stack is empty.");
        return -1;
    }
    return stack[top];
}

void printStack()
{
    if (top == -1)
    {
        printf("Stack is empty.");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()

{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);

    pop();
    pop();

    // peek();

    printStack();

    return 0;
}