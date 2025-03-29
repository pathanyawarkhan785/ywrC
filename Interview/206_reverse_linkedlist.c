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