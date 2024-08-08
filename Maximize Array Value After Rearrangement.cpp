class Solution {
  public:
    int Maximize(vector<int> arr) {
        int Mod=1e9+7;
        int ans=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            ans=(ans+((long)arr[i]*i)%Mod)%Mod;
        }
        return ans;
    }
};
