class Solution{
public:
    string stringMirror(string str){
        int n=str.size();
        if(n==1) return str+str;
        string pre="";
        pre+=str[0];
        
        for(int i=1;i<n;i++){
            if(str[i-1]>str[i]){
                pre+=str[i];
            }
            else if(pre.length()>1 && str[i-1]==str[i]){
                pre+=str[i];
            }
            else break;
        }
        string rev=pre;
        reverse(rev.begin(),rev.end());
        return pre+rev;
    }
};
