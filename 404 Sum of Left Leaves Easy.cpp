class Solution {
    int leftSum =0 ;
public:
    bool isLeaf(TreeNode* root){
        return (!root->left  &&  !root->right) ? true : false ;
    }
        
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) return 0 ;
        
        if(root->left  &&  isLeaf(root->left))  leftSum += root->left->val ;
        
        int left = sumOfLeftLeaves(root->left) ;
        int right = sumOfLeftLeaves(root->right) ;
        
        
        return leftSum ;
    }
};