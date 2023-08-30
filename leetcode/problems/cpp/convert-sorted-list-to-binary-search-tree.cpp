// by @codeAbinash
// Time : O(n)
// Space : O(n)

#include "iostream"
#include "vector"



struct ListNode {
   int val;
   ListNode* next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode* next) : val(x), next(next) {}
};


struct TreeNode {
   int val;
   TreeNode* left;
   TreeNode* right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
   TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
   TreeNode* toBst(ListNode* start, ListNode* end) {
      if (start == end) return nullptr;
      ListNode* slow = start;
      ListNode* fast = start;

      while (fast != end && fast->next != end) {
         slow = slow->next;
         fast = fast->next->next;
      }

      TreeNode* head = new TreeNode(slow->val);
      head->left = toBst(start, slow);
      head->right = toBst(slow->next, end);
      return head;
   }

public:
   TreeNode* sortedListToBST(ListNode* head) {
      if (!head) return nullptr;
      return toBst(head, nullptr);
   }
};