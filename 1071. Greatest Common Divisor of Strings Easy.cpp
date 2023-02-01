class Solution {
public:
    int gcd(int a,int b){
        if(a==b) return a;
        else if(a>b) return gcd(a-b,b);
        else return gcd(a,b-a);
    }
    string gcdOfStrings(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        if(s1[0]!=s2[0]) return "";
        string ans;
        int x=gcd(n1,n2);
        for(int i=0;i<x;i++) ans+=s1[i];
        int i=0,j=0;
        while(i<n1){
            if(s1[i]!=s2[j%n2]) return "";
            i++;
            j++;
        }

        return ans;
    }
};




class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        return (str1 + str2 == str2 + str1)? 
        str1.substr(0, gcd(size(str1),size(str2))): "";
    }
};
