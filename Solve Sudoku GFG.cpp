class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        solve(grid);
    }
    bool solve(int grid[N][N]){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0){
                    
                    for(int d=1;d<=9;d++){
                        if(isValid(grid, i, j, d)){
                            grid[i][j]=d;
                            
                            if(solve(grid)==true){
                                return true;
                            }
                            else{
                                grid[i][j]=0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isValid(int grid[N][N], int row, int col, int d){
        for(int i=0;i<9;i++){
            if(grid[row][i]==d) return false;
            if(grid[i][col]==d) return false;
            
            if(grid[ 3*(row/3)+ i/3 ][ 3*(col/3) +i%3 ]==d ) return false;
        }
        
        return true;
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        if(SolveSudoku(grid)){
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    cout<<grid[i][j]<<" ";
                }
            }
        }
    }
};
