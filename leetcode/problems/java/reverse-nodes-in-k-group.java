
class Solution {
  public ListNode reverseKGroup(ListNode head, int k) {
    ListNode dummy = new ListNode(0);
    dummy.next = head;
    ListNode prev = dummy;
    ListNode curr = head;
    int count = 0;
    while (curr != null) {
      count++;
      if (count % k == 0) {
        prev = reverse(prev, curr.next);
        curr = prev.next;
      } else {
        curr = curr.next;
      }
    }
    return dummy.next;
  }

  private ListNode reverse(ListNode prev, ListNode next) {
    ListNode last = prev.next;
    ListNode curr = last.next;
    while (curr != next) {
      last.next = curr.next;
      curr.next = prev.next;
      prev.next = curr;
      curr = last.next;
    }
    return last;
  }
}