class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        int n=arr.size();
        long long ans = 1;
        int mod = 1e9+7;
        int  mn = INT_MIN;
        for (int i=0;i<n;i++) {
            if (arr[i] == 0) continue;
            if (arr[i] < 0){
                mn = max(mn,arr[i]);
            }
            ans = (ans * arr[i]) % mod;
        }
        
        if(ans<0) return ans/mn;
        return ans;
    }
};
