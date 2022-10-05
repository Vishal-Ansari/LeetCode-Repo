class Solution {
public:
    
    TreeNode* invertTree(TreeNode* root) {
       stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            if(node!=NULL){
                st.push(node->left);
                st.push(node->right);
                swap(node->left,node->right);
            }
        }
        return root;
    }
};