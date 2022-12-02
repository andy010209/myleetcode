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
    vector<int> x;
    vector<vector<int>> ans;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root,targetSum);
        return ans;
    }
    void dfs(TreeNode* root, int target){
        if(!root) return;
        x.push_back(root->val);
        if(!root->left&&!root->right){
            if(target==root->val) ans.push_back(x);
        }
        if(root->left) dfs(root->left,target-root->val);
        if(root->right) dfs(root->right,target-root->val);
        x.pop_back();
    }
};