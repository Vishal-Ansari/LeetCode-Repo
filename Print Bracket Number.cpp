class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        vector<int> ans;
        int open=0;
        stack<int>st;
        int n=str.length();
        int i=0;
        while(i<n){
            if(str[i]=='('){
                open++;
                st.push(open);
                ans.push_back(open);
            }
            else if(str[i]==')'){
                int close= st.top();
                st.pop();
                ans.push_back(close); 
            }
            i++;
        }
        return ans;
    }
};
