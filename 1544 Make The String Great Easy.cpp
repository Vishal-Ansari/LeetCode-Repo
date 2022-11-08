class Solution {
public:
    string makeGood(string s) {
        if(s.size()==0 || s.size()==1) return s;
        string ans="";
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(st.empty()) st.push(s[i]);
            else{
                if(abs(st.top()-s[i])==32)
                st.pop();
                else
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};
