class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int x= n+m;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    continue;
                }  
                int top=x;
                int left=x;
                if(i-1>=0) top=grid[i-1][j];
                if(j-1>=0) left=grid[i][j-1];
                grid[i][j]=min(top,left)+1;
            }
        }   
        for(int i=m-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==1) {
                    continue;
                }
                int bottem=x;
                int right=x;
                if(i+1<m) bottem=grid[i+1][j];
                if(j+1<n) right=grid[i][j+1];
                grid[i][j]=min(grid[i][j],min(bottem,right)+1);
            }
        }      
        int count=INT_MIN;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                count=max(count,grid[i][j]);
                }
            }
        return count-1==n+m+1||count-1==0 ? -1: count-1;
    }
};              
