class Solution {
  public:
    int isPerfectNumber(long long N) {
        
        if(N<=1) return 0;
        long long sum = 1;
        for(int i=2;i<=sqrt(N);i++){
            if(N%i==0) {
                sum+=i;
                if(i != N/i) sum+=N/i; 
            }
        }
        return sum == N ;
    }
};





class Solution {
  public:
    
    int isPerfectNumber(long long N) {
        long long sum=0;
        long long num=N;
        long long last=1;
        for(int i=2;i<=N;i++){
            if(N%i==0){
                long long prod=1;
                while(N%i==0){
                    prod=prod*i;
                    if(prod!=last)  sum+=prod;
                    last=prod;
                    N=N/i;
                    if(last!=N)   sum+=N;
                    last=N;
                }
            }
        }
        if(sum==num) return 1;
        return 0;
    }
};
