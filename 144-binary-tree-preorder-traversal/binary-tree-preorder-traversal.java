
class Solution {
    List<Integer> l = new ArrayList<>();

    public List<Integer> preorderTraversal(TreeNode root) {
        if (root == null) {
            return l;
        }

        l.add(root.val);
        preorderTraversal(root.left);
        preorderTraversal(root.right);

        return l;
    }
}
