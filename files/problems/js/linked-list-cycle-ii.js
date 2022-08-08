var detectCycle = function (head) {
    while (head && head.next) {
        head.val = null;
        head = head.next;
        if (head.val == null)
            return head;
    }
    return null;
};