import java.util.Arrays;
import java.util.PriorityQueue;

class Solution {
  public String[] findRelativeRanks(int[] score) {
    Integer[] sort = new Integer[score.length];
    for (int i = 0; i < score.length; i++) {
      sort[i] = i;
    }

    Arrays.sort(sort, (a, b) -> (score[b] - score[a]));

    String[] result = new String[score.length];

    for (int i = 0; i < score.length; i++) {
      if (i == 0) {
        result[sort[i]] = "Gold Medal";
      } else if (i == 1) {
        result[sort[i]] = "Silver Medal";
      } else if (i == 2) {
        result[sort[i]] = "Bronze Medal";
      } else {
        result[sort[i]] = String.valueOf(i + 1);
      }
    }

    return result;
  }
}

class Solution2 {
  // Using priority queue
  public String[] findRelativeRanks(int[] score) {
    int n = score.length;
    String[] result = new String[n];
    PriorityQueue<Integer> pq = new PriorityQueue<>(n, (a, b) -> score[b] - score[a]);

    for (int i = 0; i < n; i++) {
      pq.add(i);
    }

    for (int i = 0; i < n; i++) {
      int index = pq.poll();
      if (i == 0) {
        result[index] = "Gold Medal";
      } else if (i == 1) {
        result[index] = "Silver Medal";
      } else if (i == 2) {
        result[index] = "Bronze Medal";
      } else {
        result[index] = String.valueOf(i + 1);
      }
    }

    return result;
  }
}