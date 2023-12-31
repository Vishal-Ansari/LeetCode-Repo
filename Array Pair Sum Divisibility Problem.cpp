class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
      int n = nums.size();
        if(n % 2) return false;
        vector<int> mp(k + 1, 0); 
        for(auto x : nums){
            x %= k;
            mp[x]++;
            mp[k-x]--;
        } 
        for(int i = 1; i < k; i++) if(mp[i]>0) return false;
        return true;
    }
};
