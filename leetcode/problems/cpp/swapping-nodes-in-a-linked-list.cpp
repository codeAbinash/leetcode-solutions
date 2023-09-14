// by @codeAbinash
// Time : O(n)
// Space : O(1)

#include "algorithm"

struct ListNode {
   int val;
   ListNode* next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
   ListNode* swapNodes(ListNode* head, int k) {
      ListNode* first, * second, * curr;
      first = second = curr = head;
      
      while (--k) {
         curr = curr->next;
      }
      
      first = curr;
      curr = curr->next;

      while (curr) {
         curr = curr->next;
         second = second->next;
      }

      std::swap(first->val, second->val);
      return head;
   }
};
