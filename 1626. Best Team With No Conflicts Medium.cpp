class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<vector<int>>v;
        int n=scores.size();
        for(int i=0;i<n;i++)  v.push_back({ages[i],scores[i]});
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());// sorted in decreAasing order
        int dp[n];
        memset(dp,0,sizeof(dp));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=i;j>=0;j--){
                if(v[i][1]<=v[j][1]){
                    dp[i]=max(dp[i],dp[j]+v[i][1]);
                }
            }
            ans=max(ans,dp[i]);
        }
        return ans;
    }
};
