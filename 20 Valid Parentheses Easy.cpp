class Solution {
public:
    //"{[]}"
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();
        if(s[0]==')' || s[0]=='}'||s[0]==']')
                return false;
        for(auto c: s){
            if(st.empty())
                st.push(c);
            else if(st.top()=='(' && c==')' ||
                    st.top()=='{' && c=='}' ||
                    st.top()=='[' && c==']' 
                   )
                st.pop();
            else
                st.push(c);
        }
        if(!st.empty())
        return false;
        
        return true;
    }
};