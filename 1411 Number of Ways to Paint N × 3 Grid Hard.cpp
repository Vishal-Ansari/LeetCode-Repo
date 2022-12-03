class Solution {
public:
    int numOfWays(int n) {
        int ans=0;
        long c2=6,c3=6;
        for(int i =2;i<=n;i++){
            long temp=c2;
            c2=(2*c3+3*c2)%1000000007;
            c3=(2*temp+2*c3)%1000000007;
        }
        return (c2+c3)%1000000007;
    }
};
