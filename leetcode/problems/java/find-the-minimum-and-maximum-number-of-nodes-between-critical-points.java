class Solution {
  public int[] nodesBetweenCriticalPoints(ListNode head) {
    ListNode pre = head;
    ListNode cur = head.next;
    int[] ans = { -1, -1 };
    int prePos = -1, curPos = -1, firstPos = -1, pos = 0;
    while (cur.next != null) {
      if ((cur.val < pre.val && cur.val < cur.next.val) || (cur.val > pre.val && cur.val > cur.next.val)) {
        prePos = curPos;
        curPos = pos;
        if (firstPos == -1) {
          firstPos = pos;
        }
        if (prePos != -1) {
          if (ans[0] == -1)
            ans[0] = curPos - prePos;
          else
            ans[0] = Math.min(ans[0], curPos - prePos);
          ans[1] = pos - firstPos;
        }
      }
      pos++;
      pre = cur;
      cur = cur.next;
    }
    return ans;
  }
}