class Solution {
  public:
  int mod=1e9+7;
  int nthFibonacci(int n){
          if(n==0) return 0;
          if(n==1) return 1;
          int a=0,b=1,c;
          for(int i=2;i<=n;i++){
              c=(a+b)%mod;
              a=b;
              b=c;
          }
          return c;
    }
};

// dp 
class Solution {
  public:
  int mod=1e9+7;
    int nthFibonacci(int n){
        if(n==0) return 0;
        if(n==1) return 1;
        int l=1;
        int sl=0;
        for(int i=2;i<=n;i++){
            dp[i]=(dp[i-1]+dp[i-2])%mod;
        }
        return dp[n];
    }
};
