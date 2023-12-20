class Solution{
public:
    int findWinner(int n, int A[]){
        int num=0;
        for(int i=0;i<n;i++){
            num=num^A[i];
        }
        if(num==0) return 1;
        if(n%2==0) return 1;
        return 2;
    }
};
