
class Solution {
  public:
    void dfs(int row, int col,int n, int m, vector<vector<int>> &mat, vector<vector<int>>& vis ){
        vis[row][col]=1;
        
        int x[]={-1,0,+1,0};
        int y[]={0,+1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+x[i];
            int ncol=col +y[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]==1){
                dfs(nrow,ncol,n,m,mat,vis);
            }
            
        }
        
    }
    int numEnclaves(vector<vector<int>> &mat) {
        // Code here
         int n=mat.size();
         int m=mat[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int j=0;j<m;j++){
            if(mat[0][j]==1 && !vis[0][j]){
                dfs(0,j,n,m,mat,vis);
            }
            if(mat[n-1][j]==1 && !vis[n-1][j]){
                dfs(n-1,j,n,m,mat,vis);
            }
        }
        
        for(int i=0;i<n;i++){
            if(mat[i][0]==1 && !vis[i][0]){
                dfs(i,0,n,m,mat,vis);
            }
            if(mat[i][m-1]==1 && !vis[i][m-1]){
                dfs(i,m-1,n,m,mat,vis);
            }
        }
        
        int ans=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]==1) ans++;
            }
        }
        
        return ans;
    }
};
