class Solution {
public:
    string ans;
    string add(int a, string s){
        string ans;
        for(int i=0; i<s.size() ;i++){
            if(i%2==1)ans+=((s[i]-'0'+ a)%10+'0');
            else ans+=s[i];
        }
        return ans;
    }

    string rot(int b, string s){
        int n=s.length();
        string ans="";
        ans+=s.substr(n-b);
        ans+=s.substr(0,n-b);
        return ans;
    }

    void dfs( int a, int b, string s, set<string>& v){
        if(v.find(s)!=v.end()) return;
        v.insert(s);
        ans=min(ans,s);
        dfs(a,b, add(a,s), v);
        dfs(a,b, rot(b,s), v);
    }

    string findLexSmallestString(string s, int a, int b) {
         ans=s;
        set<string>v;
        dfs(a,b,s,v);
        return ans;
    }
};
