class Solution
{
    public:
    long long countWays(int n)
    {
        int mod= 1e9+7;
        if(n==0 || n==1) return 1;
        if(n==2) return 2;
        long long ans=0;
        long long one=1;
        long long two=1;
        long long three=2;
        for(int i=3;i<=n;i++){
            ans= (one+two+three)%mod;
            one=two;
            two=three;
            three=ans;
        }
        return ans;
    }
};
