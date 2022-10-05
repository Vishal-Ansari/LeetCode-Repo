class Solution {
public:
    bool ans=false;
    bool match(TreeNode* root, TreeNode* subRoot){
        if(root!=NULL && subRoot!=NULL )
        {
            bool a=match(root->left,subRoot->left);
            bool b=match(root->right,subRoot->right);
            
            if(root->val==subRoot->val && a && b)
                return true;
            else 
                return false;
        }else if(root==NULL && subRoot==NULL)
            return true;
        else
            return false;
    }
    
    void inorder(TreeNode* root, TreeNode* subRoot){
    if(root!=NULL){
        inorder(root->left,subRoot);
        bool x=match(root,subRoot);
        if(x){ans=x;}
        inorder(root->right,subRoot);
    }    
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    inorder(root,subRoot);
        return ans;
    }
};