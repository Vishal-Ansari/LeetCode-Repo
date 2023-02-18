class Solution {
public:
    int minimumTotal(vector<vector<int>>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);
        for(int i=0;i<n;i++){
            dp[i]=nums[n-1][i];
        }

        for(int i=n-2;i>=0;i--){
            for(int j=0;j<nums[i].size();j++){
                dp[j]=min(dp[j],dp[j+1])+ nums[i][j];
            }
        }
        return dp[0];
    }
};
