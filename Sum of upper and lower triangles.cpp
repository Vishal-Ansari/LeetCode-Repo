class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        vector<int> ans;
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sum1+=(matrix[i][j]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                sum2+=(matrix[i][j]);
            }
        }

        ans.push_back(sum1);
        ans.push_back(sum2);
        return ans;
    }
};
