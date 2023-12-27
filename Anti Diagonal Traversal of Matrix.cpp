class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans;
        int col=0,row=0;
        while(col<m && row<n){
            int i=col;
            int j=row;
            while(i>=0 && j<n){
                ans.push_back(matrix[j][i]);
                i--;
                j++;
            }
            if(col<m-1) col++;
            else row++;
        }
        return ans;
    }
};
