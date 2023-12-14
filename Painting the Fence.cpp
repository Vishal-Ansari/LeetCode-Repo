class Solution{
    public:
    long long countWays(int n, int k){
        int mod=1e9+7;
        long long nonR=k;
        long long R=0;
        for(int i=0;i<n-1;i++){
            long long n=((R*(k-1))+ nonR*(k-1))%mod;
            long long r=nonR*1;
            nonR=o;
            R=t;
        }
        return (nonR +R)%mod;
    }
};
