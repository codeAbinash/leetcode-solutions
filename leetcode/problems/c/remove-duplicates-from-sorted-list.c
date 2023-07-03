struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* tmp = head , *last = head;

    if(head == NULL) return NULL;

    while(tmp!=NULL) {
        if(tmp->val != last->val) {
            last->next = tmp;
            last = tmp;
        }
        tmp = tmp->next;
    }

    last->next = tmp;
    return head;
}