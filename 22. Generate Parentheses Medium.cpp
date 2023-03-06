class Solution {
public:
    void solve(int n, vector<string>&ans , int open , int close, string temp){
        if(temp.size()==n*2){
            ans.push_back(temp);
            return;
        }

        if(open<n) solve(n,ans,open+1,close,temp+"(");
        if(close<open) solve(n,ans,open,close+1,temp+")");
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n, ans, 0 , 0 ,"");
        return ans;
    }
};
