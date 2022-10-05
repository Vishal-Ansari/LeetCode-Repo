class Solution {
public:
    
    void mark_island(vector<vector<char>>& matrix,int x,int y,int r, int c){
        if(x<0 || x>=r || y<0|| y>=c || matrix[x][y]!='1')
            return;
        matrix[x][y]='2';
        mark_island(matrix,x+1,y,r,c);// down
        mark_island(matrix,x,y+1,r,c);//right
        mark_island(matrix,x-1,y,r,c);//up
        mark_island(matrix,x,y-1,r,c);//left
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        if(rows==0) return 0;
        int col=grid[0].size();
        
        int island=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1'){
                    mark_island(grid,i,j,rows,col);
                    island+=1;
                }
            }
        }
        
        return island;
    }
};