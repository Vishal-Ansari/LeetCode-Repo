class Solution{
    public:
        int m=1000000007;
        
    long long power(int N,int R)
     {
    // recursive
    //   if(R==1)return N%m;
    //     long long ans=power(N,R/2);
    //     ans=ans*ans%m;
    //     if(R%2==1)ans=(ans*N)%m;
    //     return ans;

       // iterative
     long long ans = 1;
    long long base = N % m;

    while (R > 0) {
        if (R % 2 == 1) {
            ans = (ans * base) % m;
        }
        base = (base * base) % m;
        R /= 2;
    }

    return ans;
    }
};
