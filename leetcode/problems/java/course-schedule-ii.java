import java.util.*;

class Solution {
  public int[] findOrder(int numCourses, int[][] prerequisites) {
    List<Integer>[] adj = new List[numCourses];
    int[] indegree = new int[numCourses];
    List<Integer> ans = new ArrayList<>();

    for (int[] pair : prerequisites) {
      int course = pair[0];
      int prerequisite = pair[1];
      if (adj[prerequisite] == null) {
        adj[prerequisite] = new ArrayList<>();
      }
      adj[prerequisite].add(course);
      indegree[course]++;
    }

    Queue<Integer> queue = new LinkedList<>();
    for (int i = 0; i < numCourses; i++) {
      if (indegree[i] == 0) {
        queue.offer(i);
      }
    }

    while (!queue.isEmpty()) {
      int current = queue.poll();
      ans.add(current);

      if (adj[current] != null) {
        for (int next : adj[current]) {
          indegree[next]--;
          if (indegree[next] == 0) {
            queue.offer(next);
          }
        }
      }
    }

    return ans.size() == numCourses ? ans.stream().mapToInt(i -> i).toArray() : new int[0];
  }
}