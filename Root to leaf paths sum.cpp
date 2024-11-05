class Solution {
  public:
    void dfs(Node* root,int &ans, int x){
        if(!root->left && !root->right){
            ans+=x*10+root->data;
            return ;
        }
        if(root->left){
            dfs(root->left,ans,x*10+root->data);
        }
        if(root->right){
            dfs(root->right,ans,x*10 + root->data);
        }
    }
    int treePathsSum(Node *root) {
        int ans=0;
        int x=0;
        dfs(root,ans,x);
        return ans;
    }
};
