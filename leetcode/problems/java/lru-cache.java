class LRUCache {

  class Node {
    int key;
    int value;
    Node prev;
    Node next;

    Node(int key, int value) {
      this.key = key;
      this.value = value;
    }
  }

  Node[] cache;
  int capacity, size;
  Node head, tail;

  public LRUCache(int capacity) {
    this.capacity = capacity;
    this.size = 0;
    this.cache = new Node[10001];

    head = new Node(0, 0);
    tail = new Node(0, 0);

    head.next = tail;
    tail.prev = head;
    head.prev = null;
    tail.next = null;
  }

  void deleteNode(Node node) {
    node.prev.next = node.next;
    node.next.prev = node.prev;
  }

  void addNode(Node node) {
    node.next = head.next;
    node.next.prev = node;
    node.prev = head;
    head.next = node;
  }

  public int get(int key) {
    if (cache[key] != null) {
      Node node = cache[key];
      int val = node.value;
      deleteNode(node);
      addNode(node);
      return val;
    } else {
      return -1;
    }
  }

  public void put(int key, int value) {
    if (cache[key] != null) {
      Node node = cache[key];
      node.value = value;
      deleteNode(node);
      addNode(node);
    } else {
      Node node = new Node(key, value);
      cache[key] = node;

      if (size < capacity) {
        size++;
        addNode(node);
      } else {
        cache[tail.prev.key] = null;
        deleteNode(tail.prev);
        addNode(node);
      }
    }
  }
}

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */