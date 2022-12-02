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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL) return {};
        vector<vector<int>> ans;
        queue<TreeNode*>tree;
        tree.push(root);
        TreeNode* t;
        int l;
        while(tree.empty()==0){
            l=tree.size();
            vector<int> x;
            for(int i=0;i<l;i++){
                t=tree.front();
                tree.pop();
                x.push_back(t->val);
                if(t->left!=NULL){
                    tree.push(t->left);
                }
                if(t->right!=NULL){
                    tree.push(t->right);
                }
            }
            ans.push_back(x);
        }
        return ans;
    }
};