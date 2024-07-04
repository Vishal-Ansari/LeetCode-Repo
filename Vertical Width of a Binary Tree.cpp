class Solution {
  public:
    // Function to find the vertical width of a Binary Tree.
    void dfs(Node* root, int level,int &mn, int &mx){
        if(!root) return;
        mn=min(mn,level);
        mx=max(mx,level);
        dfs(root->left,level-1,mn,mx);
        dfs(root->right,level+1,mn,mx);
    }
    int verticalWidth(Node* root) {
        int level=0;
        int mn=0;
        int mx=0;
        if(!root) return 0;
        dfs(root,level,mn,mx);
        return abs(mn)+mx+1;
    }
};
