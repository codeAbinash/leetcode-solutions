// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "cstddef"

struct ListNode {
   int val;
   ListNode* next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
   ListNode* removeNodes(ListNode* head) {
      if (!head) return NULL;
      head->next = removeNodes(head->next);
      return head->next && head->val < head->next->val ? head->next : head;
   }
};
