// by @codeAbinash
// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head == nullptr || head->next ==nullptr)
            return nullptr;
        ListNode * fast = head, *slow = head, *prev;
        while(fast && fast->next ){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        prev->next = prev->next->next;
        return head;
    }
};