class Solution {
public:
    int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        int n=s.size()-1;
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i])
                return 2;
        }
        return 1;
    }
};