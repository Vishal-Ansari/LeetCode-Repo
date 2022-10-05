
 class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0 ;
        
        if(root->val >= low  &&  root->val <= high){
            return root->val + rangeSumBST(root->left ,low ,high) +rangeSumBST(root->right ,low ,high) ;
        }
        
        else if(root->val > low){
            return rangeSumBST(root->left ,low ,high) ;
        }
        else{
            return rangeSumBST(root->right ,low ,high) ;
        }
    }
    
};
