class Solution {
public:
    string reverseVowels(string s) {
        string v="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='A' || s[i]=='e'|| s[i]=='E' || s[i]=='i'|| s[i]=='I'
            || s[i]=='o'|| s[i]=='O' || s[i]=='u'|| s[i]=='U'){
                v+=s[i];
            }
        }
        reverse(v.begin(),v.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'|| s[i]=='A' || s[i]=='e'|| s[i]=='E' || s[i]=='i'|| s[i]=='I'
            || s[i]=='o'|| s[i]=='O' || s[i]=='u'|| s[i]=='U'){
                s[i]=v[j];
                j++;
            }
        }
        return s;
    }
};
