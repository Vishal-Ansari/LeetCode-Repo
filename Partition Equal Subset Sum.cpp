class Solution{
public:
    bool dfs(int ind, int N, int target,int arr[], vector<vector<int>>& dp){
        if(ind>=N){
            if(target==0) return true;
            return false;
        }
        if(dp[ind][target]!=-1) return dp[ind][target];
        bool not_pick= dfs(ind+1,N,target,arr,dp);
        bool pick=0;
        if(target>=arr[ind]){
            pick=dfs(ind+1,N,target-arr[ind],arr,dp);
        }
        return dp[ind][target]= pick | not_pick;
    }
    
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++) sum+=arr[i];
        if(sum%2!=0) return 0;
        vector<vector<int>> dp(N,vector<int>(sum/2+1,-1));
        return dfs(0,N,sum/2,arr,dp);
    }
};
