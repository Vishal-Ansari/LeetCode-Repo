class Solution
{
    void solve(Node *root, int lvl, vector<Node*> v,set<Node*>&st, int k) {
        if(!root)   return;
        v.push_back(root);
        if(!root->left && !root->right) {
            int indx = lvl - k;
            if(indx >= 0)
                st.insert(v[indx]); 
                return;
            }
            solve(root->left, lvl+1, v,st, k);
            solve(root->right, lvl+1, v,st, k);
        }
    public:
    int printKDistantfromLeaf(Node* root, int k)
    {
        vector<Node*> v;
        set<Node*> st;
        solve(root, 0, v,st, k);
        return st.size();
    }
};
