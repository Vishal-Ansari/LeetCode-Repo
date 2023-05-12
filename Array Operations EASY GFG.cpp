class Solution {
  public:
    int arrayOperations(int n, vector<int> &arr) {
        int ans = 0;
        int zerocnt = 0;
        for(int i = 0; i < n; ++i){
            if(arr[i] == 0){
                zerocnt++;
                if(i > 0 && arr[i-1] != 0) ans++;
            }
        }    
        if(arr[n-1] != 0) ans++;
        
        if(zerocnt == n) return 0;
        if(zerocnt == 0) return -1;
        return ans;
    }
};
