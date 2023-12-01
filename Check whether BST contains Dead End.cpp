class Solution{
  public:
    void storeNodes(Node * root, unordered_set<int> &st,unordered_set<int> &leafset){
        if (root == NULL)
            return ;
        
        st.insert(root->data);
        if (root->left==NULL && root->right==NULL)
        {
            leafset.insert(root->data);
            return ;
        }
        storeNodes(root-> left, st, leafset);
        storeNodes(root->right, st, leafset);
    }
    bool isDeadEnd(Node *root)
    {
        if(!root) return true;
        unordered_set<int> st, leafset;
        st.insert(0);
        storeNodes(root, st, leafset);
        
        for (auto it: leafset){
        auto x =it;
        if (st.find(x+1) != st.end() && st.find(x-1) != st.end())
            return true;
        }
        
        return false ;
    }
};
