pub struct Solution;

// Definition for singly-linked list.
#[derive(PartialEq, Eq, Clone, Debug)]
pub struct ListNode {
   pub val: i32,
   pub next: Option<Box<ListNode>>,
}

impl ListNode {
   #[inline]
   fn new(val: i32) -> Self {
      ListNode { next: None, val }
   }
}
impl Solution {
   pub fn reverse_list(mut head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
      let mut new_head = None;

      while let Some(mut node) = head {
         head = node.next;
         node.next = new_head;
         new_head = Some(node);
      }

      new_head
   }
}
