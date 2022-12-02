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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*>tree;
        if(root==NULL) return ans;
        tree.push(root);
        bool inv=0;
        while(tree.size()){
            vector<int> x;
            int l=tree.size();
            for(int i=0;i<l;i++){
                TreeNode* t=tree.front();
                tree.pop(); 
                if(t->left) tree.push(t->left);
                if(t->right) tree.push(t->right);
                x.push_back(t->val);
            }
            if(inv==1) reverse(x.begin(),x.end());
            ans.push_back(x);
            inv=!inv;
        }
        return ans;
    }
};