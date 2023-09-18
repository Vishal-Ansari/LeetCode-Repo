class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n==0) return false;
        if(n==1) return true;
        while(n>2){
            if(1&n) return false;
            n=n>>1;
        }
        if(1&n) return false;
        return true;
    }
};
