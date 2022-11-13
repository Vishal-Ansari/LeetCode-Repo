class Solution {
public:
    vector<int> xorQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> ans; 
        for(int i = 1; i < A.size(); i++) 
            A[i] = A[i]^A[i-1];   

        for(int i = 0; i < queries.size(); i++) {
            int start = queries[i][0]; 
            int end = queries[i][1];   
            
            if(start == 0)
            ans.push_back(A[end]);
            else 
            ans.push_back(A[start-1]^A[end]); 
        }
        return ans;
    }
};
