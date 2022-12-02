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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int ind=0;
        return build(preorder,inorder,ind,0,inorder.size()-1);
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& ind, int left, int right){
        if(left>right) return NULL;
        int piv=left;
        while(inorder[piv]!=preorder[ind]) piv++;
        
        ind++;
        TreeNode* newnode=new TreeNode(inorder[piv]);
        newnode->left=build(preorder,inorder,ind,left,piv-1);
        newnode->right=build(preorder,inorder,ind,piv+1,right);
        return newnode;
    }
};