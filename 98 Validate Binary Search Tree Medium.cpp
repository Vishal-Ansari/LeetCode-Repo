class Solution {
public:
    bool solve(TreeNode* root, long minVal, long maxVal){
        if(!root)
            return true ;
        
        if(root->val >= maxVal || root->val <= minVal)
            return false ;
        
        return solve(root->left, minVal, root->val) && solve(root->right, root->val, maxVal) ;
    }
        
    bool isValidBST(TreeNode* root) {
        return solve(root, LONG_MIN, LONG_MAX) ;
    }
};