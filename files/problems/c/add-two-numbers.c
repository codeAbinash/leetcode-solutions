struct ListNode* createNode(){
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->next = NULL;
    return node;
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head, *tmp = NULL;
    tmp = head = createNode();
    int carry = 0, sum;

    while (l1 || l2) {
        sum = carry;
        tmp->next = createNode();
        tmp = tmp->next;
        
        if(l1){
            sum+= l1->val;
            l1 = l1->next;
        }
        if(l2){
            sum+= l2->val;
            l2 = l2 ->next;
        }
        
        tmp->val = sum % 10;
        carry = sum / 10;
    }

    if (carry) {
        tmp->next = createNode();
        tmp->next->val = carry;
    }
    return head->next;
}