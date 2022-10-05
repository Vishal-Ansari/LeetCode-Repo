class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int> ans;
        unordered_map<int, priority_queue<int, vector<int>, greater<int>> > mp;
        
        int row=mat.size();
        if(row==0) return mat;
        int col=mat[0].size();
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int k=i-j;
                mp[k].push(mat[i][j]);
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                int k=i-j;
                mat[i][j]=mp[k].top();
                mp[k].pop();
            }
        }
        return mat;
    }
};