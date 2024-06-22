class Solution {
  public:
    long long ExtractNumber(string s) {
        long long ans=-1;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]>='0' && s[i]<='9'){
                long long num=0;
                bool nine=false;
                while(s[i]!=' ' && i<n){
                    if(s[i]=='9'){
                        nine=true;
                    }
                    int x=s[i]-'0';
                    num=num*10+ x;
                    i++;
                }
                if(nine==false){
                    ans=max(ans,num);
                }
            }
        }
        return ans;
    }
};
