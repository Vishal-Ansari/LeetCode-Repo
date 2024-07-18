class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return 1;
        if(n==2) return arr[0]==arr[1]? 1 : 2;
        
    //     for (int i = 1; i < n; ++i) {
    //         if (arr[i] > arr[i - 1]) {
    //             up = down + 1;
    //         } else if (arr[i] < arr[i - 1]) {
    //             down = up + 1;
    //         }
    //     }
    // return max(up, down);
        
        int ans=1;
        int pre=arr[0];
        for(int i=1;i<n-1;i++){
            if( ( pre<arr[i] && arr[i]>arr[i+1]  ) ||  (pre>arr[i] && arr[i]<arr[i+1])){
                ans++;
                pre=arr[i];
            }
        }
        return ans+1;
    }
};
