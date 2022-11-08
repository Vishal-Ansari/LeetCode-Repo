class Solution {
public:
    int help(int s, int e, vector<int>& pair){
        if(s+1==e) return 1;
        else{
            int ans=0;
            for(int i=s+1;i<e;){
                ans+=help(i,pair[i],pair);
                i=pair[i]+1;
            }
            return ans*2;
        }
    }
    int scoreOfParentheses(string s) {
        s="("+s+")";
        int n=s.size();
        vector<int> v, pair(n);
        for(int i=0;i<n;i++){
            if(s[i]=='(')
            v.push_back(i);
            else{
                pair[i]=v.back();
                pair[v.back()]=i;
                v.pop_back();
            }
        }
        return help(0,n-1,pair)/2;
    }
};
