#include "vector"
using namespace std;

class Solution {
 public:
   vector<int> findRedundantConnection(vector<vector<int>>& edges) {
      vector<int> parent(1001, -1);
      for (auto edge : edges) {
         int u = edge[0], v = edge[1];
         while (parent[u] != -1) u = parent[u];
         while (parent[v] != -1) v = parent[v];
         if (u == v) return edge;
         parent[u] = v;
      }
      return {};
   }
};

class Solution2 {
 public:
   vector<int> findRedundantConnection(vector<vector<int>>& edges) {
      vector<int> parent(edges.size() + 1, -1);
      vector<int> rank(edges.size() + 1, 0);
      for (auto edge : edges) {
         int u = edge[0], v = edge[1];
         if (find(parent, u) == find(parent, v)) return edge;
         unionn(parent, rank, u, v);
      }
      return {};
   }

   int find(vector<int>& parent, int u) {
      if (parent[u] == -1) return u;
      return parent[u] = find(parent, parent[u]);
   }

   void unionn(vector<int>& parent, vector<int>& rank, int u, int v) {
      int pu = find(parent, u);
      int pv = find(parent, v);
      if (pu == pv) return;
      if (rank[pu] > rank[pv]) {
         parent[pv] = pu;
      } else if (rank[pu] < rank[pv]) {
         parent[pu] = pv;
      } else {
         parent[pu] = pv;
         rank[pv]++;
      }
   }
};
