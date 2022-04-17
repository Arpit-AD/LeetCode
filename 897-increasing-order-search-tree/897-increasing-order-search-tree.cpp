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
    TreeNode* increasingBST(TreeNode* root) {
        stack<TreeNode*> st;
    if(not root) return NULL;
    TreeNode*temp = new TreeNode(-1);
    TreeNode*curr = temp;
    while( !st.empty() || root!=NULL){
        while(root){
            st.push(root);
            root = root->left;
            
        }
        root = st.top();
        temp->right = new TreeNode(root->val);
        temp =temp->right;
        root = root->right;st.pop();
    }
    return curr->right;
    }
};