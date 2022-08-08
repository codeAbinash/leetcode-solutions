struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    struct ListNode head, *ptr = &head;
    head.next = NULL;

    while (list1 && list2){
        if (list1->val < list2->val ){
            ptr->next = list1;
            list1 = list1->next;
        }else{
            ptr->next = list2;
            list2 = list2->next;
        }
        ptr = ptr->next;
    }

    if(list1)
        ptr->next = list1;
    if(list2)
        ptr->next = list2;
    return head.next;
}

struct ListNode * createNode(int val) {
    struct ListNode *newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}