class Solution {
  public int findCenter(int[][] edges) {
    int a = edges[0][0];
    int b = edges[0][1];

    if (a == edges[1][0] || a == edges[1][1])
      return a;
    else
      return b;
  }
}