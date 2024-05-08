import java.util.PriorityQueue;

class Solution {
  public ListNode mergeKLists(ListNode[] lists) {
    if (lists == null || lists.length == 0)
      return null;
    PriorityQueue<ListNode> queue = new PriorityQueue<>(lists.length, (a, b) -> a.val - b.val);

    ListNode dummy = new ListNode(0);
    ListNode tail = dummy;

    for (ListNode node : lists) {
      if (node != null)
        queue.add(node);
    }

    while (!queue.isEmpty()) {
      tail.next = queue.poll();
      tail = tail.next;

      if (tail.next != null)
        queue.add(tail.next);
    }

    return dummy.next;
  }
}

class Solution2 {
  public ListNode mergeKLists(ListNode[] lists) {
    if (lists == null || lists.length == 0)
      return null;
    return merge(lists, 0, lists.length - 1);
  }

  ListNode merge(ListNode[] lists, int start, int end) {
    if (start == end)
      return lists[start];
    int mid = (start + end) / 2;
    ListNode left = merge(lists, start, mid);
    ListNode right = merge(lists, mid + 1, end);
    return mergeTwoLists(left, right);
  }

  ListNode mergeTwoLists(ListNode l1, ListNode l2) {
    if (l1 == null)
      return l2;
    if (l2 == null)
      return l1;
    if (l1.val < l2.val) {
      l1.next = mergeTwoLists(l1.next, l2);
      return l1;
    } else {
      l2.next = mergeTwoLists(l1, l2.next);
      return l2;
    }
  }
}