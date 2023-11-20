class Solution{
  public:
    int mod=1e9+7;
    unordered_map<int, int>mp;
    
    void solve(Node* root, int k, int sum, int& ans)
    {
        if(!root) return;
        
        sum += root->data;
        ans += mp[sum-k];
        mp[sum]++;
        
        solve(root->left, k, sum,ans);
        solve(root->right, k, sum,ans);
        
        mp[sum]--;
    }
  
    int sumK(Node *root,int k)
    {
        int ans=0;
        mp[0]=1;
        solve(root, k, 0,ans);
        return ans;
    }
};
