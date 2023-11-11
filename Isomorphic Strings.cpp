class Solution
{
    public:
    bool areIsomorphic(string s1, string s2)
    {
        int n=s1.length();
        if(s2.length()!=n) return false;
        vector<int> f(26,-1);
        unordered_map<char,char>mp;
        for(int i=0;i<n;i++){
            if(mp.find(s1[i])!=mp.end()){
                if(mp[s1[i]]!=s2[i]) return false;
            }
            else{
                if(f[s2[i]-'a']!=-1 ) return false;
                else{
                    mp[s1[i]]=s2[i];
                    f[s2[i]-'a']=1;
                }
            }
        }
        return true;
    }
};
