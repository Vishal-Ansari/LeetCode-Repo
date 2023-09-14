class Solution{
	public:
	#define mod 1000000007
    int dfs(int arr[],int ind,int n,int target,vector<vector<int>> &dp){
        if(ind>=n){
            if(target==0) return 1;
             return 0;
        }
        if(dp[ind][target]!=-1)
        return dp[ind][target];
        
        int notTake=dfs(arr,ind+1,n,target,dp)%mod;
        int take=0;
        if(target>=arr[ind])
        {
            take=dfs(arr,ind+1,n,target-arr[ind],dp)%mod;
        }
        
        return dp[ind][target] = (take+notTake)%mod;
    }
    
    int perfectSum(int arr[], int n, int sum)
    {
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return dfs(arr,0,n,sum,dp);
    }
	  
};
