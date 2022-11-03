class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size()<k) return false;
        map<int,int>mp;
        for(auto a:s)mp[a]++;
        int no=0;
        for(auto x:mp) if(x.second%2==1) no++;
        return no<=k;
    }
};
