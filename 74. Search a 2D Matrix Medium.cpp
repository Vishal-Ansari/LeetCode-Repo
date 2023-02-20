class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();

        int i=0, j=col-1;
        while(i>=0 && i<row && j>=0 && j<col){
            if(matrix[i][j]== target) return true;
            else if(matrix[i][j]<target){
                i++;
            }
            else if(matrix[i][j]> target){
                j--;
            }
        }
        return false;
    }
};
