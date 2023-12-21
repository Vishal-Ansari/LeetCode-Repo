class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        int s = 0;
        int dp[N] = {0};
        for (int i = 1; i < N; i++) {
            find_dp(ratings, dp, i, i - 1);
            find_dp(ratings, dp, N - i - 1, N - i);
        }
        for (int i = 0; i < N; i++) {
            
            s += dp[i] + 1;
        }
        return s;
    }
    
    void find_dp(vector<int> &ratings, int* dp, int mx, int mn){
        if (ratings[mn] < ratings[mx]) {
            dp[mx] = dp[mx] > 0 ? max(dp[mx], dp[mn] + 1) : dp[mn] + 1;
        }
    }
    int max(int a, int b) {
        return a > b ? a : b;
    }
};
