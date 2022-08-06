struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
    struct ListNode *nextHead = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *tmp = head;
    int length = 0;

    while (tmp != NULL) {
        length++;
        tmp = tmp->next;
    }
    length -= n;

    nextHead->next = head;
    tmp = nextHead;

    while (length > 0) {
        length--;
        tmp = tmp->next;
    }

    tmp->next = tmp->next->next;
    
    return nextHead->next;
}