class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > arr) {
        int ans=-1;
        int n=arr.size();
        int m=arr[0].size();
        int i=0;
        int j=m-1;
        while(i<n && j>=0){
            if(arr[i][j]==1){
                ans=i;
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
