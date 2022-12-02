/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return root;
        queue<Node*>tree;
        tree.push(root);
        tree.push(NULL);
        Node* Temp;
        while(tree.size()>1){
            Temp=tree.front();
            tree.pop();
            if(!Temp){
                tree.push(NULL);
                continue;
            }
            Temp->next=tree.front();
            if(Temp->left) tree.push(Temp->left);
            if(Temp->right) tree.push(Temp->right);
        }
        return root;
    }
};