class Solution {
public:
    string reverseWords(string s) {
        int l=0,r=0;
        while(l<s.size()){
            while(r<s.size() && s[r]!=' '){
                r++;
            }
            reverse(s.begin()+l,s.begin()+r);
            l=r+1;
            r=l;
            
        }
        return s;
    }
};









class Solution {
public:
    string reverseWords(string s) {
        string str="";
        string ans="";
        for(int i=0;i<s.size();i++){
                if(s[i]==' '){
                    reverse(str.begin(),str.end());
                    ans+=str;
                    ans+=' ';
                    str="";
                    continue;
                }
            str+=s[i];
        }
        reverse(str.begin(),str.end());
        ans+=str;
        return ans;
    }
};