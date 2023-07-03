struct ListNode *createNode() {
    struct ListNode *newNode =
        (struct ListNode *)malloc(sizeof(struct ListNode));
    return newNode;
}
void insertEnd(int data, struct ListNode **headRef) {
    struct ListNode *newNode, *last;
    newNode = createNode();
    last = *headRef;

    newNode->data = data;
    newNode->next = NULL;

    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    while (last->next != NULL) last = last->next;
    last->next = newNode;
}
struct ListNode *removeElements(struct ListNode *head, int val) {
    struct ListNode *tmp = head;
    if(head == NULL) return NULL;
    if(head->data == val) return removeElements(head->next, val);

    while (tmp->next) {
        if (tmp->next->data == val) 
            tmp->next = tmp->next->next;
        tmp = tmp->next;
    }
    return head;
}