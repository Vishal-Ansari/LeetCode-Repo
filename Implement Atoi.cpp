class Solution{
  public:
    int atoi(string s) {
        int ans=0;
        int sign=1;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='-' && i==0){
                sign=-1;
            }
            else if(s[i]>='0' && s[i]<='9'){
                ans=ans*10+(s[i]-'0');
            }
            else return -1;
        }
        ans=ans*sign;
        return ans;
    }
};
