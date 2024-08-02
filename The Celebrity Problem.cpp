class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& mat) {
        int ans=-1;
        int n=mat.size();
        for(int i=0;i<n;i++){
            bool rowZero=true;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1) {
                    rowZero=false;
                    break;
                }
            }
            if(rowZero==true){
                bool colOne=true;
                for(int j=0;j<n;j++){
                    if(j==i) continue;
                    if(mat[j][i]==0){
                        colOne=false;
                        break;
                    }
                }
                if(rowZero && colOne) return i;
            }
        }
        return -1;
    }
};
