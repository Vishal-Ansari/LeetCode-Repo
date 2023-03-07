class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1), count(n,1);
        int mx=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i] && dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    count[i]=count[j];
                }
                else if(dp[j]+1==dp[i]){
                    count[i]=count[j]+count[i];
                }
            }
        }
        mx=*max_element(dp.begin(),dp.end());
        for(int i=0;i<n;i++){
            if(dp[i]==mx) ans+=count[i];
        }
        return ans;
    }
};
