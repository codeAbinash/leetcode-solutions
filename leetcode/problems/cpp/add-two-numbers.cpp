// by @codeAbinash
// Time : O(m + n)
// Space : O(1)

#include "iostream"
using namespace std;

struct ListNode {
   int val;
   ListNode* next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* sumNode = new ListNode();
      ListNode* temp = sumNode;
      int carry = 0, sum;

      while (l1 || l2 || carry) {
         sum = carry;
         if (l1) { sum += l1->val;l1 = l1->next; }
         if (l2) { sum += l2->val;l2 = l2->next; }
         carry = sum / 10;
         ListNode* newNode = new ListNode(sum % 10);
         temp->next = newNode;
         temp = temp->next;
      }

      return sumNode->next;
   }
};