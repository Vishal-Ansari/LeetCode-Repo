class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>ans(m,-1);
        
        for(int i=0;i<m;i++){
            int x=0,y=i;
            while(true){
                if(x>=n){
                 if(y>=0 && y<m){
                     ans[i]=y;
                 }
                    else{
                        
                    }
                    break;
                }
                else{
                    if(y+1<m && grid[x][y]==1 && grid[x][y+1]==1){
                        x++;
                        y++;
                    }else if(y-1>=0 && grid[x][y]==-1 && grid[x][y-1]==-1){
                        x++;
                        y--;
                    }else{
                        break;
                    }
                }
            }
        }
        return ans;
            
    }
};





//DP solution
class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>>dp(m + 1, vector<int>(n, -1));
        for (int j = 0; j < n; j++) dp[m][j] = j; //Initializing the answer to the bottom case subproblem
     
        for (int i = m - 1; i >= 0; i--) //Move from bottom to top,                        
        {                               //as subproblems of next row should be solved for any current row
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1) //if board is right
                {
                    bool isRightCellRight = (j + 1 == n)? false : (grid[i][j + 1] == 1);
                    if (isRightCellRight) dp[i][j] = dp[i + 1][j + 1]; 
                    //if we can reach next row, take the answer from the next row subproblem
                }
                else if (grid[i][j] == -1) //if board is left
                {
                    bool isLeftCellLeft = (j - 1 < 0)? false : (grid[i][j - 1] == -1);
                    if (isLeftCellLeft) dp[i][j] = dp[i + 1][j - 1];
                }
            }
        }
    
        return dp[0];
        
    }
};
