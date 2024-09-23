class Solution
{
    public:
    string smallestWindow (string s, string p)
    {
        int minLen = INT_MAX;
        int sind = -1;
        int r = 0 , l = 0;
        vector<int> mp(256,0);
        for(int i=0;i<p.size();i++){
            mp[p[i]]++;
        }
        int cnt  =0;
        while(r<s.length()){
            if(mp[s[r]] > 0){
                cnt++;
            }
            mp[s[r]]--;
            while(cnt == p.length()){
                if(r-l+1 < minLen){
                    minLen = r - l +1;
                    sind = l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        return sind == -1 ? "-1" : s.substr(sind,minLen);
    }
};
