class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> row(n,0);
        vector<int> col(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==1){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(row[i]==1){
                for(int j=0;j<m;j++){
                    matrix[i][j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(col[i]==1){
                for(int j=0;j<n;j++){
                    matrix[j][i]=1;
                }
            }
        }
        
    }
};
