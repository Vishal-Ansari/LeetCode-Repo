class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        for(auto a:arr) mp[(a%k+k)%k]++; // for negative values the mod wil be positive
        if(mp[0]%2==1)return false;
        for(int i=1;i<k;i++)
            if(mp[i]!=mp[k-i]) return false;
        return true;
    }
};
