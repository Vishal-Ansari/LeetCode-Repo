class Solution {
  public:
    int mod=1000000007;
    int sumOfNaturals(int n) {
        int f=n%mod;
        int s=(n+1)%mod;
        
        long long ans= (f*1L*s)/2;
        return int (ans%mod);
    }
};
