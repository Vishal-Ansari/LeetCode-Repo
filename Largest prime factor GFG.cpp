class Solution{
public: 
    long long int largestPrimeFactor(int N){
        long long int ans=0;
        long long int i;
        for( i=2;i*i<=N;i++){
            while(N%i==0){
                if(i>ans) ans=i;
                N=N/i;
            }
        }
        if(N>1){
            if(N>ans) ans=N;
        }
        return ans;
    }
};
