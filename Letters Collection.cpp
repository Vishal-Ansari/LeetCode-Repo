class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        vector<int> ans;
        for (int i = 0; i < q; i++) {
            int hop = queries[i][0];
            int r = queries[i][1];
            int c = queries[i][2];
            if (hop == 1) {
                int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
                int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
                int sum = 0;
                for (int j = 0; j < 8; j++) {
                    int nr = r + dx[j];
                    int nc = c + dy[j];
                    if (nr >= 0 && nc >= 0 && nr < n && nc < m) {
                        sum += mat[nr][nc];
                    }
                }
                ans.push_back(sum);
            } else {
                int dx[] = {-2, -2, 2, 2, -2, 2, 0, 0, -2, -2, 2, 2, -1, 1, -1, 1};
                int dy[] = {-2, 2, -2, 2, 0, 0, -2, 2, -1, 1, -1, 1, -2, -2, 2, 2};
                int sum = 0;
                for (int j = 0; j < 16; j++) {
                    int nr = r + dx[j];
                    int nc = c + dy[j];
                    if (nr >= 0 && nc >= 0 && nr < n && nc < m) {
                        sum += mat[nr][nc];
                    }
                }
                ans.push_back(sum);
            }
        }
        return ans;
    }
};
