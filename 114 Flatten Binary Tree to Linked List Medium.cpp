class Solution {
public:
    
    // Take uforward

    void flatten(TreeNode* root) {
        if(!root) return;
        stack<TreeNode*>st;
        
        st.push(root);
        while(!st.empty()){
            TreeNode* curr=st.top();
            st.pop();
            if(curr->right)
                st.push(curr->right);
            if(curr->left)
                st.push(curr->left);
            if(!st.empty())
                curr->right=st.top();
            curr->left=NULL;
        }
    }
};











class Solution {
public:
    void flatten(TreeNode* root) {
        if(!root) return; 
        TreeNode* templeft=root->left;
        TreeNode* tempright=root->right;
        root->left=NULL;
        
        flatten(templeft);
        flatten(tempright);
        
        root->right=templeft;
        TreeNode* current=root;
        while(current->right!=NULL)
            current=current->right;
        
        current->right=tempright;
    }
};









class Solution {
public:
    
    // MORIS TRAVERSAL
    void flatten(TreeNode* root) {
        if(!root) return; 
        while(root!=NULL){
            if(root->left!=NULL){
                TreeNode* left=root->left;
                TreeNode* current=left;
                while(current->right!=NULL) current=current->right;
                current->right=root->right;
                root->left=NULL;
                root->right=left;
            }
            root=root->right;
        }
    }
};