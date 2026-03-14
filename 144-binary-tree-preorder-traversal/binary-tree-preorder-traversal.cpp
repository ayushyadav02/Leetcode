/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> ans;
        ans.push(root);
        vector<int> sol;
        if(root==NULL) return sol;
        while(!ans.empty()){
            TreeNode* Node = ans.top();

            ans.pop();
            sol.push_back(Node->val);
            if(Node->right){
                ans.push(Node->right);
            }
            if(Node->left){
                ans.push(Node->left);
            }
        }
        return sol;
    }
};