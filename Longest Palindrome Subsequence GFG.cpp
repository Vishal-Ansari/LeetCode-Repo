class Solution{
  public:
    int dp[1001][1001];
    int helper(string& A, int left, int right){
        if(left>right)
            return 0;
        if(left==right)
            return 1;
            
        if(dp[left][right]!=-1)
        return dp[left][right];
        
        if(A[left]==A[right])
            return dp[left][right]=2+helper(A, left+1, right-1);
        
        else{
            return dp[left][right]= max(helper(A,left+1,right),helper(A,left,right-1));
        }
    }
  
    int longestPalinSubseq(string A) {
        int n=A.size();
        memset(dp,-1,sizeof(dp));
        return helper(A,0,n-1);
    }
};
