// by @codeAbinash
// Time : O(n)
// Space : O(1)


struct ListNode {
   int val;
   ListNode* next;
   ListNode() : val(0), next(nullptr) {}
   ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
   ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
      ListNode* aNode = list1, * bNode = list1;
      for (int i = 0; i < a - 1; i++) aNode = aNode->next;
      for (int i = 0; i < b; i++) bNode = bNode->next;
      aNode->next = list2;
      while (aNode->next) aNode = aNode->next;
      aNode->next = bNode->next;
      return list1;
   }
};
