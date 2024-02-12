class Solution{
public:
    long long sequence(int n){
        long long ans=1;
        int mod=1e9+7;
        int k=2;
        for(int i=2;i<=n;i++){
            long long t=1;
            for(int j=1;j<=i;j++){
                t=(t*k)%mod;
                k++;
            }
                ans= (ans+t)%mod;
        }
        return ans;
    }
};
