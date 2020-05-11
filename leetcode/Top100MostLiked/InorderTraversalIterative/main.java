import java.util.*;

//  Definition for a binary tree node.

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {
    }

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {
    List<Integer> ans = new ArrayList<>();

    public List<Integer> inorderTraversal(TreeNode root) {
        TreeNode curNode = root;
        Stack<TreeNode> stack=new Stack<>();
        while ((!stack.empty()) || (curNode != null)) {
            while (curNode != null) {
                stack.add(curNode);
                curNode = curNode.left;
            }
            curNode = stack.pop();
            this.ans.add(curNode.val);
            curNode = curNode.right;
        }
        return this.ans;
    }
}