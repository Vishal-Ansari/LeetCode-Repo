class Solution {
public:
    
    
        int n , maxVal = 1e7;
    int solve(vector<int>& jobs, int d , int index ,  vector<vector<int>> &dp){
        if(n==index && d==0)
            return 0; 
        if(n==index || d==0 || n-index<d)
            return maxVal; 
        if(dp[index][d]!=-1)
            return dp[index][d]; 
        int maxEle = 0 , ans = maxVal; 
        for(int i=index;i<n;i++){
            maxEle = max(maxEle, jobs[i]);
            ans = min(ans , maxEle + solve(jobs , d-1 , i+1 , dp));
        }
        return dp[index][d] =ans;
    }
    
    int minDifficulty(vector<int>& jobs, int d) {
        n = jobs.size();
        if(n<d)
            return -1; 
        vector<vector<int>> dp(n,vector<int>(d+1,-1));
        return solve(jobs , d , 0 , dp);
    
    
//     int dp[301][11];
    
//         int solve(vector<int>& jobd, int n, int i, int d){
//             if(d==1)
//                 return *max_element(begin(jobd)+i,end(jobd));
            
//             if(dp[i][d]!=-1)
//                 return dp[i][d];
            
//             int result=INT_MAX;
//             int currd=INT_MIN;
            
//             for(int j=i;j<=n-d;j++){
//                 currd=max(currd,jobd[j]);
//                 result=min(result,currd+solve(jobd,n,j+1,d-1));
//             }
//             dp[i][d]=result;
//             return dp[i][d];
//         } 
    
//     int minDifficulty(vector<int> jobDifficulty, int d){
//         int n=jobDifficulty.size();
//         memset(dp,-1,sizeof(dp));
//         if(n<d)
//             return -1;
//         return solve(jobDifficulty,n,0,d);
    }
};
