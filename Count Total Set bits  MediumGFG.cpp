// Approach 1

class Solution {
  public:
 
  long long count_bits(int x){
      int cnt=0;
      while(x!=0){
          if(x&1){
              cnt++;
          }
              x=x>>1;
      }
      return cnt;
  }
 
    long long countBits(long long N) {
        long long ans=0;
        for(int i=1;i<=N;i++){
            ans+=__builtin_popcount(i);
        }
        return ans;
    }
};


// Approach 2


class Solution {
  public:
    long long solve(long long n){
     if(n==0) return 0;
        long long  ans=0, x=(long long)log2(n);
        long long  upto_pow_x= x*(pow(2,x-1));
        
        int msb= n-pow(2,x)+1;
        int rest= n-pow(2,x);

        ans+= upto_pow_x + msb + solve(rest);
        
        return ans;
}

long long countBits(long long N) {
       return solve(N);
    }
};
