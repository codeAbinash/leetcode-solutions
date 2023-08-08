#include "stack"
using namespace std;

struct ListNode {
   int val;
   ListNode* next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode* next) : val(x), next(next) {}
};


// Using Stack
// by @codeAbinash
// Time : O(m + n)
// Space : O(m + n)

class Solution {
public:
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      stack<int> s1, s2;
      while (l1) { s1.push(l1->val);l1 = l1->next; }
      while (l2) { s2.push(l2->val);l2 = l2->next; }

      ListNode* ans = nullptr;
      int carry = 0;

      while (!s1.empty() || !s2.empty() || carry) {
         int sum = carry;

         if (!s1.empty()) { sum += s1.top();s1.pop(); }
         if (!s2.empty()) { sum += s2.top();s2.pop(); }

         carry = sum / 10;
         ListNode* newNode = new ListNode(sum % 10);
         newNode->next = ans;
         ans = newNode;
      }
      return ans;
   }
};



// Reversing Linked Lists
// by @codeAbinash
// Time : O(m + n)
// Space : O(1)

ListNode* reverseList(ListNode* head) {
   ListNode* prev = nullptr, * tmp;
   while (head) {
      tmp = head->next;
      head->next = prev;
      prev = head;
      head = tmp;
   }
   return prev;
}

class Solution {
public:
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      l1 = reverseList(l1);
      l2 = reverseList(l2);

      ListNode* tmp = nullptr;
      int carry = 0, sum;

      while (l1 || l2 || carry) {
         sum = carry;
         if (l1) { sum += l1->val;l1 = l1->next; }
         if (l2) { sum += l2->val;l2 = l2->next; }

         carry = sum / 10;
         ListNode* newNode = new ListNode(sum % 10);
         newNode->next = tmp;
         tmp = newNode;
      }

      return tmp;
   }
};