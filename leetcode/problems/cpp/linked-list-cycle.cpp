// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include <stddef.h>

struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  public:
   bool hasCycle(ListNode *head) {
      ListNode *slow = head, *fast = head;

      while (fast != nullptr && fast->next != nullptr) {
         slow = slow->next;
         fast = fast->next->next;
         if (slow == fast) return true;
      }

      return false;
   }
};
