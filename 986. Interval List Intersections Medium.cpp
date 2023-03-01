class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) {
        vector<vector<int>>ans;
        int i=0,j=0;
        while( i< first.size() && j<second.size()){
            int first_start=first[i][0];
            int first_end=first[i][1];
            int second_start=second[j][0];
            int second_end=second[j][1];

            int x,y;

            if(first_end>=second_start && first_start<=second_end){
                x=max(first_start,second_start);
                y=min(first_end,second_end);
                ans.emplace_back(initializer_list<int>{x,y});
            }
            first_end<second_end?i++:j++;
        }
        return ans;
    }   
};

// class Solution {
// public:
//     vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
//         vector<vector<int>> ans;
//         int i = 0, j = 0;
//         while(i < size(A) && j < size(B)) {
//             if(A[i][1] >= B[j][0] && A[i][0] <= B[j][1]) 
//                 ans.emplace_back(initializer_list<int>{ max(A[i][0], B[j][0]), min(A[i][1], B[j][1]) });
//             A[i][1] < B[j][1] ? i++ : j++;   
//         }
//         return ans;
//     }
// };




