struct ListNode *middleNode(struct ListNode *head)
{

    if (head == NULL)
    {
        printf("Linkedlist is empty.");
        return NULL;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}