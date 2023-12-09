class Solution {
  public:
    int sumdigit(int x){
        int sum=0;
        while(x){
            sum+=x%10;
            x=x/10;
        }
        return sum;
    }
    
    bool isPrime(int n){
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    
    int smithNum(int n) {
        int sum=sumdigit(n);
        int sum2=0;
        if(isPrime(n)) return 0;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                int s=sumdigit(i);
                while( n>0 && n%i==0){
                    sum2+=s;
                    n=n/i;
                }
            }
        }
        if(sum==sum2) return 1;
        return 0;
    }
};
