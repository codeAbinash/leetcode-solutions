// by @codeAbinash

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (!headA || !headB)
        return NULL;

    struct ListNode *tmp1 = headA, *tmp2 = headB;

    while (tmp1 != tmp2) {
        tmp1 = tmp1 ? tmp1->next : headB;
        tmp2 = tmp2 ? tmp2->next : headA;
    }

    return tmp1;
}