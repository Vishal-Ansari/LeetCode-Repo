class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long int ans = 0;
       for(int i=1;i<=N;i++){
           ans+=(N/i)*i;
       }
       return ans;
    }
};
