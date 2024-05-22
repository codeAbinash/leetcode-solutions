import java.util.HashMap;
import java.util.LinkedList;
import java.util.Map;
import java.util.Queue;

// Using BFS
class Solution {
  public Node cloneGraph(Node node) {
    if (node == null) {
      return null;
    }

    Map<Node, Node> map = new HashMap<>();
    Queue<Node> queue = new LinkedList<>();
    queue.offer(node);
    map.put(node, new Node(node.val));

    while (!queue.isEmpty()) {
      Node current = queue.poll();
      for (Node neighbor : current.neighbors) {
        if (!map.containsKey(neighbor)) {
          map.put(neighbor, new Node(neighbor.val));
          queue.offer(neighbor);
        }
        map.get(current).neighbors.add(map.get(neighbor));
      }
    }

    return map.get(node);
  }
}


// Using DFS
class Solution2 {
  Map<Integer, Node> newNodes = new HashMap<>();

  public Node cloneGraph(Node node) {
    if (node == null)
      return node;
    int val = node.val;
    if (newNodes.containsKey(val))
      return newNodes.get(val);

    Node copy = new Node(val);
    newNodes.put(val, copy);
    for (Node neighbor : node.neighbors) {
      copy.neighbors.add(cloneGraph(neighbor));
    }
    return copy;
  }
}