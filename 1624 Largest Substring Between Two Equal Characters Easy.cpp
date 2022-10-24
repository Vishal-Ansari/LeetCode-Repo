class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n=s.size();
        int ans=-1;
        vector<int>vis(26,-1);
        
        for(int i=0;i<n;i++){
            if(vis[s[i]-'a']==-1)
               vis[s[i]-'a']=i;
            
            int op=i- vis[s[i]-'a']-1;
            ans=max(ans,op);
        }
        return ans;
    }
};
