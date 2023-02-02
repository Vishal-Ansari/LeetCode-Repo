class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<t.length()){
            if(t[i]==s[j]){
                i++;
                j++;
            }
            else
            i++;
        }
        if(j==s.length()) return true;
        return false;
    }
};
