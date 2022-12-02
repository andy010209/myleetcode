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
    int ans=0;
    int sumNumbers(TreeNode* root) {
        r(0,root);
        return ans;
    }
    void r(int m,TreeNode* root){
        m=m*10+root->val;
        if(root->left) r(m,root->left);
        if(root->right) r(m,root->right);
        if(!root->left&&!root->right) ans+=m;
        return;
    }
};