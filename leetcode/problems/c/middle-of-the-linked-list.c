struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* tmp = head;
    int len = 0;

    while (tmp) {
        len++;
        tmp = tmp->next;
    }

    tmp = head;
    len = len / 2;
    while (len) {
        tmp = tmp->next;
        len--;
    }
    return tmp;
}