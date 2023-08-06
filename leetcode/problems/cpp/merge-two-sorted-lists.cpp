
// by @codeAntu
// time complexity o(m+n)
// space complexity o(1)

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
     
      ListNode head,*temp = &head;

      head.next = NULL;
      while (list1 && list2)
      {
         if (list1->val > list2->val)
         {
            temp->next = list2;
            list2 = list2->next;
         } else
         {
            temp->next = list1;
            list1 = list1->next;
         }
         temp = temp ->next;
      }
      if (list1)
         temp->next = list1;
      else
         temp->next = list2;

      return head.next;

   }
