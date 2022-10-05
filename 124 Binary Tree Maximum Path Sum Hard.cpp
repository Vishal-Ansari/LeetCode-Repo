class Solution {
public:
    int solve(TreeNode* root, int& maxi){
        if(!root)
            return 0 ;
        
        int left = solve(root->left, maxi) ;
        if(left < 0) left = 0 ;
        int right = solve(root->right, maxi) ;
        if(right < 0)   right =0 ;
        
        maxi = max(maxi, left+right+root->val) ;
        
        return max(left, right) + root->val ;
    }
        
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN ;
        solve(root, maxi) ;
        
        return maxi ;
    }
};