class Solution {
public:
    void dfs(int row, int col,int n, int m, vector<vector<char>> mat, vector<vector<int>>& vis ){
        vis[row][col]=1;
        
        int x[]={-1,0,+1,0};
        int y[]={0,+1,0,-1};
        for(int i=0;i<4;i++){
            int nrow=row+x[i];
            int ncol=col +y[i];
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && mat[nrow][ncol]=='O'){
                dfs(nrow,ncol,n,m,mat,vis);
            }
            
        }
        
    }

    void solve(vector<vector<char>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
         vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int j=0;j<m;j++){
            if(mat[0][j]=='O' && !vis[0][j]){
                dfs(0,j,n,m,mat,vis);
            }
            if(mat[n-1][j]=='O' && !vis[n-1][j]){
                dfs(n-1,j,n,m,mat,vis);
            }
        }
        
        for(int i=0;i<n;i++){
            if(mat[i][0]=='O' && !vis[i][0]){
                dfs(i,0,n,m,mat,vis);
            }
            if(mat[i][m-1]=='O' && !vis[i][m-1]){
                dfs(i,m-1,n,m,mat,vis);
            }
        }
        
        

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j])mat[i][j]='X';
            }
        }
    }
};
