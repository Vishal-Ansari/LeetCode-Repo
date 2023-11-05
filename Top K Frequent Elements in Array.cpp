class Solution {
  public:
  
        static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second > b.second) {
            return true;
        }
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return false;
    }

    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        
        vector<pair<int,int>>freq;
        for(auto it:mp){
            freq.push_back({it.first,it.second});
        }
        
        sort(freq.begin(),freq.end(),comp);
        
        vector<int>ans;
        for(int i=0;i<k;i++){
            ans.push_back(freq[i].first);
        }
        return ans;
    }
};
