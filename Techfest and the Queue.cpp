class Solution {
public:
    int primes(int x){
        int ans=0;
        for(int i=2;i*i<=x;i++){
            while(x%i==0){
                ans++;
                x=x/i;
            }
        }
        if(x!=1) ans++;
        return ans;
    }
	int sumOfPowers(int a, int b){
	    int ans=0;
	    for(int i=a;i<=b;i++){
	        ans+=primes(i);
	    }
	    return ans;
	}
};
