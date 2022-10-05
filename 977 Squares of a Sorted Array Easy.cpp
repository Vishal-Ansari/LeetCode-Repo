class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        int i,j,temp;
        int x=arr.size();
        for(i=0;i<x;i++) {
            arr[i]=arr[i]*arr[i];
        }
      sort(arr.begin(),arr.end());
        
        return arr;
    }
    
};