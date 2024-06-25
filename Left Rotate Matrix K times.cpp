class Solution {
public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int n = mat.size();
        int m = mat[0].size();
 
        k = k % m;
        if (k == 0) return mat;
        vector<vector<int>> arr(n, vector<int>(m));
 
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                arr[j][i] = mat[j][(i + k) % m];
            }
        }
        
        return arr;
    }
};
