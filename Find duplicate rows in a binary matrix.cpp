class Solution
{   
    public:
    vector<int> repeatedRows(vector<vector<int>> &matrix, int M, int N) 
    { 
        vector<int> ans;
        set<vector<int>> st;
        for(int i=0;i<M;i++){
            if(st.find(matrix[i])!=st.end()){
                ans.push_back(i);
            }else{
                st.insert(matrix[i]);
            }
        }
        return ans;
    } 
};
