#include <stdio.h>
#include <stdlib.h>

struct ListNode
{
    int val;
    struct ListNode *next;
};

void printList(struct ListNode *head)
{
    while (head)
    {
        printf("%d->", head->val);
        head = head->next;
    }
}

struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode *dummy = (struct ListNode *)malloc(sizeof(struct ListNode));
    dummy->val = -1;
    dummy->next = head;

    struct ListNode *curr = dummy;

    while (curr->next)
    {
        if (curr->next->val == val)
        {
            struct ListNode *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
        }
        else
        {
            curr = curr->next;
        }
    }

    head = dummy->next;
    free(dummy);
    return head;
}

int main()

{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *second = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *third = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *fourth = (struct ListNode *)malloc(sizeof(struct ListNode));

    head->val = 5;
    head->next = second;

    second->val = 10;
    second->next = third;

    third->val = 15;
    third->next = fourth;

    fourth->val = 10;
    fourth->next = NULL;

    // printList(head);

    head = removeElements(head, 10);
    printList(head);

    return 0;
}