// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

bool isPalindrome(struct ListNode* head) {
    struct ListNode *slow, *fast, *prev = NULL, *tmp;
    slow = fast = head;

    // Middle of the linked list in slow
    while (fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // reverse second half
    while (slow) {
        tmp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = tmp;
    }

    // Check if palindrome
    fast = head;
    slow = prev;
    while (slow) {
        if (fast->val != slow->val) return false;
        fast = fast->next;
        slow = slow->next;
    }
    return true;
}