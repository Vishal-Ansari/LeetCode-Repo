class Solution {
public:
    void dfs(TreeNode* root , int val , int d , int curr_depth){
        if(root==NULL)
            return ;
        
        if(curr_depth==d){
            TreeNode* curr_left = new TreeNode(val); 
            TreeNode* curr_right=new TreeNode(val);  
            TreeNode* next_left=root->left , *next_right=root->right;
            
            root->left=curr_left; 
            curr_left->left=next_left; 
            root->right=curr_right;
            
            curr_right->right=next_right;
            
            return ;
        }
        
        dfs(root->left , val , d , curr_depth+1);
        dfs(root->right , val ,d , curr_depth+1);
    }
    
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        
        if(depth==1){
            TreeNode* curr=new TreeNode(val);
            curr->left=root;
            return curr;
        }
        
        dfs(root , val , depth , 2);
        return root;
    }
};
