class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        if(N%2==0) return 0;
        int ans=A[0];
        for(int i=2;i<N;i+=2){
            ans^=A[i];
        }
        return ans;
    }
};
