class Solution{
    public:
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        int n=arr.size();
        vector<vector<int>> ans;
        set<vector<int>> st;
        
        sort(arr.begin(),arr.end());
        // 2 3 4 5 7 8 10
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1, r=n-1;
                int sum=0;
                while(l<r){
                    sum=arr[i]+arr[j]+arr[l]+arr[r];
                    if(sum==k){
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[l]);
                        v.push_back(arr[r]);
                        st.insert(v);
                        r--;
                        l++;
                    }
                    else if(sum<k) l++;
                    else r--;
                }
                while(j<n-1 && arr[j+1]== arr[j] ) j++;
            }
            while(i<n-1 && arr[i+1]== arr[i] ) i++;
        }
    
        for(auto it: st) ans.push_back(it);
         return ans;
    }
};
