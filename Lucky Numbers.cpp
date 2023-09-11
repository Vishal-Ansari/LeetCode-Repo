class Solution{
public:
    bool isLucky(int n) {
        for(int i=2;i<=n;i++){
            if(n%i==0)return false;
            n=n-n/i;
        }
        return true;
    }
};
