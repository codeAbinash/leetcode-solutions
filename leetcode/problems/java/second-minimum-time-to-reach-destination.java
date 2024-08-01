import java.util.*;

class Solution {
  public int secondMinimum(int n, int[][] edges, int time, int change) {
    @SuppressWarnings("unchecked")
    List<Integer>[] graph = new ArrayList[n + 1];
    for (int i = 0; i < n + 1; i++)
      graph[i] = new ArrayList<>();
    for (int[] edge : edges) {
      graph[edge[0]].add(edge[1]);
      graph[edge[1]].add(edge[0]);
    }

    Deque<int[]> deque = new LinkedList<>();
    int[] visitedNum = new int[n + 1];
    int[] timeArr = new int[n + 1];
    Arrays.fill(timeArr, -1);
    deque.offerLast(new int[] { 1, 0 });
    timeArr[0] = 0;

    while (deque.size() > 0) {
      int curSize = deque.size();
      for (int i = 0; i < curSize; i++) {
        int[] cur = deque.pollFirst();
        int nextTime = 0;
        int curLight = cur[1] / change;
        if (curLight % 2 == 0)
          nextTime = cur[1] + time;
        else
          nextTime = (curLight + 1) * change + time;

        for (int nextNode : graph[cur[0]]) {
          if (visitedNum[nextNode] < 2 && timeArr[nextNode] < nextTime) {
            deque.offerLast(new int[] { nextNode, nextTime });
            visitedNum[nextNode]++;
            timeArr[nextNode] = nextTime;
            if (nextNode == n && visitedNum[nextNode] == 2)
              return nextTime;
          }
        }
      }
    }
    return -1;
  }
}