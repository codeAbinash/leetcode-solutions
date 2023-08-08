
// by @CodeAntu
// time complexity o(n)
// space complexity o(1)



class Solution {
public:
   ListNode* deleteDuplicates(ListNode* head) {
      ListNode * temp = head;

      while (temp && temp->next)
      {
         if (temp->val ==  temp-> next -> val)
         {
            temp -> next = temp-> next -> next;
            continue;
         }
         temp = temp -> next;
      }
      return head;
   }
};
