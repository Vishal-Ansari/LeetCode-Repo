class Solution {
  public:
    bool dfs(Node* root,int sum, int target){
        if(!root->left && !root->right){
            if(sum+root->data==target)
            return true;
            return false;
        }
        bool left=false, right=false;
        
        if(root->left)
             left=dfs(root->left,sum+root->data, target);
        if(root->right)
            right=dfs(root->right,sum+root->data, target);
            
        return left||right;
     }
    bool hasPathSum(Node *root, int target) {
        return dfs(root,0,target);
    }
};
