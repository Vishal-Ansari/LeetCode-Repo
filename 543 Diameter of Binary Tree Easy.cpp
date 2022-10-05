class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL) return 0;
        return max(height(root->left),height(root->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
       if (root==NULL) return 0;
        int d1=height(root->left)+height(root->right);
        int d2=diameterOfBinaryTree(root->left);
        int d3=diameterOfBinaryTree(root->right);
        int dm1=max(d2,d3);
        int dm2=max(d1,dm1);
        return dm2;
    }
};




class Solution {
public:
    int res=0;
    int height(TreeNode* root){
        if(root==NULL) return 0;
        int lh= height(root->left);
        int rh=height(root->right);
        res=max(res,1+lh+rh);
        
        return max(lh,rh)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
       int data= height(root);
        return res-1;
    }
};