class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        vector<vector<int>> ans;
        set<vector<int>> st;
        ans.push_back(arr);
        st.insert(arr);
        if(n==1) return ans;
        while(true){
            int ind = -1;
            for(int i = n-2; i>=0; i--){
                if(arr[i]<arr[i+1]){
                    ind = i;
                    break;
                }
            }
            for(int i = n-1; i > ind && ind!=-1; i--){
                if(arr[i] > arr[ind]){
                    swap(arr[i], arr[ind]);
                    break;
                }
            }
            reverse(arr.begin()+ind+1, arr.end());
            if(st.find(arr)!=st.end()) 
                break;  
            ans.push_back(arr);
            st.insert(arr);
        }
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};
