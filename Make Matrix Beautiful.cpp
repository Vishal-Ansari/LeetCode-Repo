class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
       int totelsum = 0,currsumrow =0,currsumcolumn =0 ;
        int maxsum = INT_MIN;
        
        for(int i=0;i<n;i++){
            currsumrow =0;
            currsumcolumn=0;
            for(int j=0;j<n;j++){
              currsumrow += matrix[i][j];
              currsumcolumn += matrix[j][i];
              totelsum+= matrix[i][j];
            }
            maxsum = max (currsumrow,maxsum);
            maxsum = max (currsumcolumn,maxsum);
        }
        
        return ((n*maxsum)-totelsum);
    } 
};
