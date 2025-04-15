#include <stdio.h>

struct node
{
    int val;
    struct node *next;
};

struct node *delNode(struct node *head, int val)
{
    if (!head)
        return NULL;

    if (head->val == val)
    {
        struct node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    struct node *curr = head;

    while (curr->next && curr->next->val != val)
    {
        curr = curr->next;
    }

    if (curr->next)
    {
        struct node *temp = curr->next;
        curr->next = curr->next->next;
        free(temp);
    }

    return head;
}

#include <stdio.h>

int main()

{

    head = delNode(head, 3);
    return 0;
}