class Solution {
public:
    #define ll long long 
    ll  dfs(TreeNode* root,ll sum, ll &ans){
        if(!root) return 0;
        ll curr= dfs(root->left,sum,ans)+dfs(root->right,sum,ans)+root->val;
        ans=max(ans,(sum-curr)*curr);
        return curr;
    }
    
      ll int maxProduct(TreeNode* root) {
        ll ans=0;
        ll sum=dfs(root,0,ans);
        sum=dfs(root,sum,ans);
        ans%=1000000007;
        return (int)ans;
    }
   
};


















class Solution {
public:
    long long total=0, ans=0;
    long long help1(TreeNode* root){
       if(!root) return 0;
        return help1(root->left)+help1(root->right)+root->val;
    }
    long long help2(TreeNode* root){
        if(!root) return 0;
        long long l=help2(root->left);
        long long r=help2(root->right);
        long long up=total-l-r-root->val;
        long long op1=l*((long long)root->val+r+up);
        long long op2=r*((long long)root->val +l+up);
        long long op3=up*((long long)root->val+l+r);
        ans=max(ans,max(op1,max(op2,op3)));
        return l+r+root->val;
    }
        
    int maxProduct(TreeNode* root) {
        int mod=1e9+7;
        total=help1(root);
        help2(root);
        return ans%mod;
        
    }
};



