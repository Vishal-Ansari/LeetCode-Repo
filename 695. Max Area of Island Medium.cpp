class Solution {
public:
    int dfs(vector<vector<int>>& mat,int i,int j){
        if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size() 
           || mat[i][j]== -1 || mat[i][j]==0   ){
            return 0;
        }
        mat[i][j] = -1; //mark it visited...so,we don't repeat this cell again
        int a=dfs(mat,i+1,j);
        int b=dfs(mat,i-1,j);
        int c=dfs(mat,i,j+1);
        int d=dfs(mat,i,j-1);
        return 1 + a+b+c+d;
    }
    int maxAreaOfIsland(vector<vector<int>>& mat) {
        int r=mat.size();
        int c=mat[0].size();
        int ans=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(mat[i][j] == 1){
                    int curr = dfs(mat,i,j);  
                    ans = max(ans,curr);
                }
            }
        }
        return ans;
    }
};










class Solution {
public:
    // 0:water
    // 1:land
    // 2:visited
//-----------------------------------------------------------------
    vector<int> ii= {-1,0,+1,0}, jj= {0,+1,0,-1};
    int m,n;
//-----------------------------------------------------------------
    bool isValid(int i,int j){
        return ((i>=0 && i<m) && (j>=0 && j<n));
    }
//-----------------------------------------------------------------
    int bfs(int i, int j,vector<vector<int>>& grid){
        int ans=1;
        queue<vector<int>> q;
        grid[i][j]=2;
        q.push({i,j});
        while(!q.empty()){
            int i_= q.front()[0];
            int j_= q.front()[1];
            q.pop();
            for(int ind=0;ind<4;ind++){
                if(isValid(i_+ii[ind] , j_+jj[ind])  && grid[i_+ii[ind]][j_+jj[ind]]==1){
                    ans++;
                    grid[i_+ii[ind]][j_+jj[ind]]= 2;
                    q.push({i_+ii[ind] , j_+jj[ind]});
                }
            }
        }
        return ans;
    }
//-----------------------------------------------------------------
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        m= grid.size();
        n= grid[0].size();
        int ans= 0;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int temp= 0;
                if(grid[i][j]==1) temp= bfs(i,j,grid);
                ans= max(ans,temp);
            }
        }
        return ans;
    }
};

//solution by uttams_237
