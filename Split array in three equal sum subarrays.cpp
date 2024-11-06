class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans;
        int sum=0;
        for(int i=0;i<n;i++) sum+=arr[i];
        if(sum%3!=0) return {-1,-1};
        int s_part=sum/3;
        int s=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
            if(s==s_part){
                ans.push_back(i);
                if(ans.size()==2) break;
                s=0;
            }
        }
        if(ans.size()==2) return ans;
        return {-1,-1};
    }
};
