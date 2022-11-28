class Solution {
public:
    vector<int> dx = {-1, 0, 1, 0};
    vector<int> dy = {0, 1, 0, -1};
    bool dfs(vector<vector<int>>& grid, int i, int j, int n, int m, int mid, vector<vector<bool>>& vis){
        if(i == n - 1 && j == m - 1)
            return true;
        vis[i][j] = true;
        for(int k = 0; k < 4; k++){
            int new_i = i + dx[k];
            int new_j = j + dy[k];
            if(new_i >= 0 && new_i < n && new_j >= 0 && new_j < m && 
            abs(grid[new_i][new_j] - grid[i][j]) <= mid && vis[new_i][new_j] == false)
            {
                if(dfs(grid, new_i, new_j, n, m, mid, vis))
                    return true;
            }
        }
        return false;
    }
    
    int minimumEffortPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int low = 0;
        int high = 1e6;
        int ans = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            vector<vector<bool>> vis(n, vector<bool> (m, false));
            if(dfs(grid, 0, 0, n, m, mid, vis)){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};
