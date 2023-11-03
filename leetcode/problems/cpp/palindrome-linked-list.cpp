// by @codeAbinash
// Time : O(n)
// Space : O(1)

struct ListNode {
   int val;
   ListNode *next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
  public:
   bool isPalindrome(ListNode *head) {
      ListNode *slow = head, *fast = head;
      ListNode *prev = nullptr, *next = nullptr;

      while (fast && fast->next) {
         slow = slow->next;
         fast = fast->next->next;
      }

      // Reverse the second half of the list
      while (slow) {
         next = slow->next;
         slow->next = prev;
         prev = slow;
         slow = next;
      }

      // Compare the first half and the reversed second half
      while (prev) {
         if (prev->val != head->val) return false;
         prev = prev->next;
         head = head->next;
      }
      return true;
   }
};
