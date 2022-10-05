class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        string str="";
        int n=s.size(); 
        int i=0;
        while(i<n){
            if(st.empty()|| st.top()!=s[i])
                st.push(s[i]);
            else
                st.pop();
            
            i++;
        }
        while(!st.empty()){
            char ele=st.top();
            st.pop();
            str+=ele;
        }
        reverse(str.begin(),str.end());
        return str;
    }
};