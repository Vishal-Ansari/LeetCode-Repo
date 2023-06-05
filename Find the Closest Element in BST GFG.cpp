class Solution
{
    public:
    int find(Node* root, int k, int &ans){
        if(!root) return ans;
        if(root->data==k) return 0;
        
        if(root) ans=min(ans,abs(root->data-k));
        if(root->left) ans=min(ans, abs(root->left->data-k));
        if(root->right) ans=min(ans, abs(root->right->data-k));
        
        if(root->data >k) find(root->left,k,ans);
        else find(root->right,k,ans);
    }
    
    
    int minDiff(Node *root, int K)
    {
        int ans=INT_MAX;
        return find(root, K, ans);
    }
};
