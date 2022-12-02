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
    void flatten(TreeNode* root) {
        if(root==NULL) return;
        TreeNode* next;
        TreeNode* R;
        while(root){
            if(root->left){
                R=r(root->left);
                next=root->right;
                root->right=root->left;
                root->left=NULL;
                R->right=next;
            }
            root=root->right;
        }
    }
    TreeNode* r(TreeNode* root){
        if(root->right==NULL) return root;
        return r(root->right);
    }
};