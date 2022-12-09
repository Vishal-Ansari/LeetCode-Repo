class Solution {
public:
    int dfs(TreeNode* root, int mx, int mn){
            if(!root) return mx-mn;

             mx=max(mx, root->val);
             mn=min(mn,root->val);

            int left = dfs(root->left,mx,mn);
            int right = dfs(root->right,mx,mn);

            return max(left,right);
    }

    int maxAncestorDiff(TreeNode* root) {
       if(!root) return 0;
       return dfs(root,root->val,root->val);
    }
};

