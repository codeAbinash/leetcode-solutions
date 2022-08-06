struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev = NULL, *curr, *next;
    curr = next = head;

    while (next != NULL) {
        next = next->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}