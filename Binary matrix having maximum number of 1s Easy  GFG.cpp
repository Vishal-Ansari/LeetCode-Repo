class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        int row=0,mx=0;
        
        for(int i=0;i<N;i++){
            int sum=0;
            for(int j=0;j<N;j++){
                sum+=mat[i][j];
            }
            if(sum>mx){
                mx=sum;
                row=i;
            }
        }
        return {row,mx};
    }
};







class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> mat, int N) {
        int r=0,mx=N;
        
        if(N==0) return {};
        if(N==1){
            if(mat[0][0]==1) return {0,1};
            return {};
        }
        
        
        int col=N-1, row=0;
        while(row<N && col>=0){
            if( mat[row][col]==0){
                row++;
            }
            else if(mat[row][col]==1){
                mx=col;
                r=row;
                
                col--;
            }
        }
        return {r, N-mx};
    }
};
