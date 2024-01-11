class Solution {
  public:
    string removeKdigits(string S, int k) {
    int n = S.length();
    if (k == n) {
        return "0";
    }
    stack<char> st;
    for (char digit : S) {
        while (!st.empty() && k > 0 && st.top() > digit) {
            st.pop();
            k--;
        }
        st.push(digit);
    }
    while (k > 0) {
        st.pop();
        k--;
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    int len=ans.length();
    int startIndex = len;
    for (int  i = 0; i <len; i++) {
        if (ans[i] != '0') {
            startIndex = i;
            break;
        }
    }
    ans = (startIndex ==len ) ? "0" : ans.substr(startIndex);
    return ans;
    }
};
