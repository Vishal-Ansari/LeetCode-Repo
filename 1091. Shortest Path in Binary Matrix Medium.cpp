class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
       int m= grid.size();
       int n= grid[0].size();
       vector<vector<int>>visited(m,vector<int>(n,0));
     
       queue<pair<pair<int,int>,int>>q;  ///queue< row, col, distance>
       if(grid[0][0]==1){
           return -1;
       }
       q.push({{0,0},1});
        visited[0][0]=1;
        int delrow[]= {-1, +1, 0, 0, -1, +1, -1, +1};
        int delcol[]= {0, 0, -1, +1, -1, +1, +1, -1};
        while(!q.empty()){
            auto it= q.front();
            q.pop();
            int row= it.first.first;
            int col= it.first.second;
            int distance= it.second;
            if(row==m-1 && col==n-1){
                return distance;
            }
            for(int i=0;i<8;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]==0 && !visited[nrow][ncol]){
                
                    grid[nrow][ncol]=1;
                        visited[nrow][ncol]=1;
                        q.push({{nrow,ncol},distance+1});
                }
            }
        }

    return -1;
    }
};
