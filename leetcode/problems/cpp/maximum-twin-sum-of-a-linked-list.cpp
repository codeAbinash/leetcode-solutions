// by @codeAbinash

#include "iostream"
#include "vector"
#include "algorithm"
#include "stack"
using namespace std;

// Definition for singly-linked list.
struct ListNode {
   int val;
   ListNode* next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode* next) : val(x), next(next) {}
};

// Using Stack
// Time : O(n)
// Space : O(n)

class Solution {
public:
   int pairSum(ListNode* head) {
      ListNode* temp = head;
      stack<int>s;
      while (temp) {
         s.push(temp->val);
         temp = temp->next;
      }
      int maxSum = 0;
      while (s.size()) {
         maxSum = max(maxSum, s.top() + head->val);
         head = head->next;
         s.pop();
      }
      return maxSum;
   }
};


// Using Two Pointer
// Time : O(n)
// Space : O(1)

class Solution {
public:
   int pairSum(ListNode* head) {
      ListNode* temp = head;
      int maxSum = 0;
      ListNode* slow = head, * fast = head;
      // Go to the middle of the linked list

      while (fast && fast->next) {
         slow = slow->next;
         fast = fast->next->next;
      }

      // Reverse the second half of the linked list
      ListNode* prev = NULL, * curr = slow, * next = NULL;

      while (curr) {
         next = curr->next;
         curr->next = prev;
         prev = curr;
         curr = next;
      }

      // Now, prev is the head of the reversed linked list
      while (prev) {
         maxSum = max(maxSum, prev->val + head->val);
         prev = prev->next;
         head = head->next;
      }

      return maxSum;
   }
};