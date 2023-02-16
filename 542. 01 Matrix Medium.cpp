class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        queue<pair<int,int>> q;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0) q.push({i,j});
                else mat[i][j]=-1;
            }
        }
        while(!q.empty()){
            int size=q.size();
            while(size--){
                auto x=q.front();
                q.pop();
                int i=x.first , j=x.second;
                if(i>0){
                    if(mat[i-1][j]==-1){
                        mat[i-1][j]=1+mat[i][j];
                        q.push({i-1,j});
                    }
                }
                if(j>0){
                    if(mat[i][j-1]==-1){
                        mat[i][j-1]=1+mat[i][j];
                        q.push({i,j-1});
                    }
                }
                if(i<n-1){
                    if(mat[i+1][j]==-1){
                        mat[i+1][j]=1+mat[i][j];
                        q.push({i+1,j});
                    }
                }
                if(j<m-1){
                    if(mat[i][j+1]==-1){
                        mat[i][j+1]=1+mat[i][j];
                        q.push({i,j+1});
                    }
                }
            }
        }
        return mat;
    }
};






// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& grid) {
//         queue<pair<int,int>> q;
//         int m=grid.size();
//         int n=grid[0].size();
//         for(int i=0;i<m;i++)
//         {
//             for(int j=0;j<n;j++)
//             {
//                 if(grid[i][j]==0)
//                     q.push({i,j});
//                 else
//                     grid[i][j]=-1;
//             }
//         }
//         vector<int> d={-1,0,1,0,-1};
//         while(!q.empty())
//         {
//             int sz=q.size();
//             for(int i=0;i<sz;i++)
//             {
//                 pair<int,int> p=q.front();
//                 q.pop();
//                 for(int j=0;j<4;j++)
//                 {
//                     int r=p.first+d[j];
//                     int c=p.second+d[j+1];
//                     if(r>=0 && c>=0 && r<m && c<n && grid[r][c]==-1)
//                     {
//                         grid[r][c]=1+grid[p.first][p.second];
//                         q.push({r,c});
//                     }
//                 }
//             }
//         }
//         return grid;
//     }
// };
