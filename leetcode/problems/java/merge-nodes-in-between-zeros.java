class Solution {
  public ListNode mergeNodes(ListNode head) {
    ListNode modify = head.next;
    ListNode nextSum = modify;

    while (nextSum != null) {
      int sum = 0;
      while (nextSum.val != 0) {
        sum += nextSum.val;
        nextSum = nextSum.next;
      }
      modify.val = sum;
      nextSum = nextSum.next;
      modify.next = nextSum;
      modify = modify.next;
    }
    return head.next;
  }
}