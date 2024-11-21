class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        int n=prices.size();
        int ans=0;
        if(n==1) return ans;
        int buy=prices[0];
        for(int i=1;i<n;i++){
            if(prices[i]<buy){
                buy=prices[i];
            }else{
                ans=max(ans,prices[i]-buy);
            }
        }
        return ans;
    }
};
