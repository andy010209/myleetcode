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
    bool a=false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return a;
        if(!root->left&&!root->right){
            if(root->val==targetSum) a=true;
        }
        if(root->left) hasPathSum(root->left,targetSum-root->val);
        if(root->right) hasPathSum(root->right,targetSum-root->val);
        return a;
    }
};