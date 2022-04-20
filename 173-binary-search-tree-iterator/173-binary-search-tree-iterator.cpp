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
class BSTIterator {
public:
  
    stack<TreeNode*> st;   //stack to hold pointers like recursion do
    
    void inorder(TreeNode *root) {
        if(root) {
            st.push(root);               //push all left pointers until it reaches end
            inorder(root->left);
        }
    }
    
    BSTIterator(TreeNode* root) {
        inorder(root);                //constructor calls inorder function
    }
    
    int next() {
        TreeNode* temp=st.top();  //get the top pointer and pop it
        st.pop();
        inorder(temp->right);   //it is same as recursive code of inorder except that we are calling it only when we need the next value
        return temp->val;
    }
    
    bool hasNext() {
        return !st.size()==0;    //if stack is empty then we have traversed all values
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */