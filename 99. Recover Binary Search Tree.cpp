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
    void recoverTree(TreeNode* root) {
        TreeNode* pre=NULL;
        TreeNode* f=NULL;
        TreeNode* s=NULL;
        TreeNode* t=NULL;
        while(root!=NULL){
            if(root->left!=NULL){
                t=root->left;
                while(t->right!=NULL&&t->right!=root)
                    t=t->right;
                if(t->right!=NULL){
                    if(pre!=NULL&&pre->val>root->val){
                        if(f==NULL) f=pre;
                        s=root;
                    }
                    pre=root;
                    t->right=NULL;
                    root=root->right;
                }
                else{
                    t->right=root;
                    root=root->left;
                }
            }
            else{
                if(pre!=NULL&&pre->val>root->val){
                    if(f==NULL) f=pre;
                    s=root;
                }
                pre=root;
                root=root->right;
            }
        
        }
        
        if(f!=NULL&&s!=NULL){
            int swap=f->val;
            f->val=s->val;
            s->val=swap;
        }
    }
};