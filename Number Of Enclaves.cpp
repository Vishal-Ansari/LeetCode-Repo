class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
       int ans=0;
       int n=grid.size();
       int m=grid[0].size();
       queue<pair<int,int>> q;
       for(int i=0;i<n;i++){
           if(grid[i][0]==1) q.push({i,0});
           if(grid[i][m-1]==1) q.push({i,m-1});
       }
       for(int i=0;i<m;i++){
           if(grid[0][i]==1) q.push({0,i});
           if(grid[n-1][i]==1) q.push({n-1,i});
       }
       
       while(!q.empty()){
           int i=q.front().first;
           int j=q.front().second;
           grid[i][j]=-1;
           q.pop();
           if(i-1>=0 && grid[i-1][j]==1) q.push({i-1,j});
           if(i+1<n  && grid[i+1][j]==1) q.push({i+1,j});
           if(j-1>=0 && grid[i][j-1]==1) q.push({i,j-1});
           if(j+1<m  && grid[i][j+1]==1) q.push({i,j+1});
       }
       
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(grid[i][j]==1) ans++;
           }
       }
       return ans;
    }
};
