class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        if(q>(2*n)) return 0;
        long long midPoint=n+1;
        long long ans=n- abs(midPoint-q);
        return ans;
    }
};
