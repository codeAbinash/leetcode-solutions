// by @codeAbinash
// Time : O(1)
// Space : O(1)

#include "cstddef"

struct ListNode {
   int val;
   ListNode* next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
   void deleteNode(ListNode* node) {
      node->val = node->next->val;
      node->next = node->next->next;
   }
};
