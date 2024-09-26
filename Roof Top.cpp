class Solution {
  public:
    // Function to find maximum number of consecutive steps
    // to gain an increase in altitude with each step.
    int maxStep(vector<int>& arr) {
        int cnt=0;
        int n=arr.size();
        int ans=0;
        for(int i=1;i<n;i++){
            if(arr[i]>arr[i-1]){
                cnt++;
                ans=max(ans,cnt);
            }
            else{
                cnt=0;
            }
        }
        return ans;
    }
};
