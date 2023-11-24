// by @codeAbinash
// Time : O(n)
// Space : O(n)

impl Solution {
    fn inorder(node: &Option<Rc<RefCell<TreeNode>>>, result: &mut Vec<i32>) {
        if let Some(v) = node {
            let v = v.borrow();
            Solution::inorder(&v.left, result);
            result.push(v.val);
            Solution::inorder(&v.right, result);
        }
    }
    pub fn inorder_traversal(root: Option<Rc<RefCell<TreeNode>>>) -> Vec<i32> {
        let mut result = vec![];
        if let Some(v) = root {
            Solution::inorder(&Some(v), &mut result);
        }
        result
    }
}
