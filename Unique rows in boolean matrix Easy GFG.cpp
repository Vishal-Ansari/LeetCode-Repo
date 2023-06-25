class Solution
{
    public:
    // #define MAX 1000
    vector<vector<int>> uniqueRow(int M[MAX][MAX],int row,int col)
    {
        vector<vector<int>> ans;
        unordered_set<string> st;
        for(int i=0;i<row;i++){
            string s;
            for(int j=0;j<col;j++){
                s+=to_string(M[i][j]);
            }
            if(st.find(s)==st.end()){
                    vector<int> x;
                    for(int i=0;i<s.size();i++){
                        x.push_back(s[i]-'0');
                    }
                    ans.push_back(x);
                }
            st.insert(s);
        }
        return ans;
    }
};
