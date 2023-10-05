class Solution
{
  public:
    long long int upto(string s, int k){
        int l=0,r=0,cnt=0;
        long long int ans=0;
        vector<int> mp(26,0);
        while(r<s.length()){
            mp[s[r]-'a']++;
            if(mp[s[r]-'a'] == 1) cnt++;
            while(cnt>k){
                mp[s[l]-'a']--;
                if(mp[s[l]-'a']<=0){
                    cnt--;
                }
                l++;
            }
            ans+=(r-l+1);
            r++;
        }
        return ans;
        
    }
    long long int substrCount (string s, int k) {
        return upto(s,k)-upto(s,k-1);
    }
};
