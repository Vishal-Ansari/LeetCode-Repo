class Solution {
public:
    
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
    
    void inorder(TreeNode* root, bool &ans){
        if(root!=NULL){
        inorder(root->left,ans);
        int l=height(root->left);
        int h=height(root->right);
        if(abs(l-h)>1)
        ans=ans&& false;
        inorder(root->right,ans);
    }
    }
    bool isBalanced(TreeNode* root) {
       bool ans=true;
        inorder(root,ans);
        return ans;
    }
};