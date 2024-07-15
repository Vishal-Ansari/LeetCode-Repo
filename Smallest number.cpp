class Solution {
  public:
    string smallestNumber(int s, int d) {
        if(d==1 && s>9) return "-1";
        if(9*d<s) return "-1";
        s=s-1;
        string ans="";
        while(d>0){
            if(s>9){
                ans="9"+ans;
                s=s-9;
            }
            else if(s<=9 && d>1){
                ans=to_string(s)+ans;
                s=0;
            }
            else{
                ans=to_string(s+1)+ans;
            }
            d--;
        }
        return ans;
    }
};
