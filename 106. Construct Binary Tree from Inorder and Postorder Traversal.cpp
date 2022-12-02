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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int ind=postorder.size()-1;
        return build(inorder,postorder,ind,0,inorder.size()-1); 
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int& ind, int left, int right){
        if(left>right) return NULL;
        int i=left;
        while(inorder[i]!=postorder[ind]) i++;
        ind--;
        TreeNode *newnode=new TreeNode(inorder[i]);
        newnode->right=build(inorder,postorder,ind,i+1,right);
        newnode->left=build(inorder,postorder,ind,left,i-1);        
        return newnode;
    }
};