class Solution {
  public:
    string printString(string s, char ch, int count) {
        string ans="";
        int n=s.size();
        int i=0,c=0;
        while(i<n){
            if(c==count){
                while(i<n) ans+=s[i++];
            }
            if(s[i]==ch) c++;
            i++;
        }
        return ans;
    }
};
