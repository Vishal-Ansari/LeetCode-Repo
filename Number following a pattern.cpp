class Solution{   
public:
    string printMinNumberForPattern(string s){
        string ans="";
        stack<int> st;
        int n=s.length();
        for(int i=0;i<=n;i++){
            st.push(i+1);
            if(s[i]=='I' || i==n){
                while(!st.empty()){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        return ans;
    }
};
