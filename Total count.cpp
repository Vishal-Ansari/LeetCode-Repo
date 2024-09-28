class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            ans+= arr[i]%k==0? arr[i]/k: arr[i]/k+1;
        }
        return ans;
    }
};
