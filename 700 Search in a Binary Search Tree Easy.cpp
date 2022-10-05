class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root) return NULL ;
        
        if(root->val < val)
            return searchBST(root->right, val) ;
        else if(root->val > val)
            return searchBST(root->left, val) ;
        
        return root ;
    }
};