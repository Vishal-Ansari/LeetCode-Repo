class Solution{
    public:
    void solve(int i,int j,vector<vector<int>> &m, int n, vector<string>&ans, string move, vector<vector<int>>&vis){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
        if(i+1<n && !vis[i+1][j] && m[i+1][j]==1){
            vis[i][j]=1;
            solve(i+1,j,m,n,ans,move+'D',vis);
            vis[i][j]=0;
        }
        if(j-1<n && !vis[i][j-1] && m[i][j-1]==1){
            vis[i][j]=1;
            solve(i,j-1,m,n,ans,move+'L',vis);
            vis[i][j]=0;
        }
        if(j+1<n && !vis[i][j+1] && m[i][j+1]==1){
            vis[i][j]=1;
            solve(i,j+1,m,n,ans,move+'R',vis);
            vis[i][j]=0;
        }
        if(i-1>=0 && !vis[i-1][j] && m[i-1][j]==1){
            vis[i][j]=1;
            solve(i-1,j,m,n,ans,move+'U',vis);
            vis[i][j]=0;
        }
        
    }
    
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> ans;
        int n=mat.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        if(mat[0][0]==1) solve(0,0,mat,n,ans,"",vis);
        return ans;
    }
};
