class Solution{
  public:
        vector<int> duplicates(int arr[], int n) {
        vector<int>ans;
        int i=0;
        while(i<n){
            if(arr[i]==-1 || arr[i]==i)
                i++;
                
            else{
                if(arr[i] == arr[arr[i]]){
                    arr[arr[i]]=-1;
                    i++;
                }
                else if(arr[arr[i]]==-1){
                    i++;
                }
                else{
                    swap(arr[i],arr[arr[i]]);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]==-1)
                ans.push_back(i);
        }
        if(ans.size()==0)
            return {-1};
        return ans;
    }
};
