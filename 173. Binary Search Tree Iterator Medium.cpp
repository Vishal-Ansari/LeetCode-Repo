class BSTIterator {
public:
     stack<TreeNode*> st;
    BSTIterator(TreeNode* root) {
        while(root) {
            st.push(root);
            root = root->left;
        }
    }
    
    int next() {
        TreeNode* t1 = st.top();
        st.pop();
        TreeNode* t = t1->right;
        while(t)
        {
            st.push(t);
            t = t->left;
        }
        return t1->val;
    }
    
    bool hasNext() {
        if(st.empty())
        return false;
        return true;
        
    }
};
