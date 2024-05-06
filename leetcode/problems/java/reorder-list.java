
class Solution {
  public void reorderList(ListNode head) {
    ListNode slow = head;
    ListNode fast = head.next;

    // Find the middle of the list
    while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }

    // Reverse the second half of the list
    ListNode second = slow.next;
    ListNode prev = slow.next = null;
    while (second != null) {
      ListNode tmp = second.next;
      second.next = prev;
      prev = second;
      second = tmp;
    }

    // Merge the two halves
    ListNode first = head;
    second = prev;

    while (second != null) {
      ListNode tmp1 = first.next;
      ListNode tmp2 = second.next;

      first.next = second;
      second.next = tmp1;

      first = tmp1;
      second = tmp2;
    }

  }
}