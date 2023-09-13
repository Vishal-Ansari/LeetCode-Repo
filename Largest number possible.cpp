class Solution{
public:
    string findLargest(int N, int S){
        string ans="";
        for(int i=0;i<N;i++){
            if(S>=9){
                ans+="9";
                S-=9;
            }else{
                ans+= to_string(S);
                S-=S;
            }
        }
        if(N>1 and ans[0]=='0') return "-1";
        if(S==0) return ans;
        return "-1";
    }
};
