class Solution
{
    public:
     int solve(int n, int x, int y, int z,int sum,vector<int>& dp){
        if(sum==n) return 0;
        if(dp[sum]!=-1) return dp[sum];
        int one=INT_MIN,  two=INT_MIN,  three=INT_MIN;
        one=solve(n,x,y,z,sum+x,dp);
        two=solve(n,x,y,z,sum+y,dp);
        three=solve(n,x,y,z,sum+z,dp);
        
        return dp[sum]=1+max(one,max(two,three));
        
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
      
        vector<int> dp(n+1,-1);
        int ans=solve(n,x,y,z,0,dp);
        if(ans<0) return 0;
        return ans;
    }
};
