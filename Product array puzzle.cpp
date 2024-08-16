class Solution {
  public:
    vector<long long int> productExceptSelf(vector<long long int>& nums) {
        int n=nums.size();
        vector<long long int> ans(n,0);
        int zero=0;
        long long int prod=1;
        for(int i=0;i<n;i++) {
            if( nums[i]==0 ){
                zero++;
            }
            else{
                prod=prod*nums[i];
            }
        }
        
        if(zero>1){
            return ans;
        }
        
        for(int i=0;i<n;i++){
           if(nums[i]==0) ans[i]=prod;
           else if(zero) ans[i]=0;
           else ans[i]=prod/nums[i];
        }
        return ans;
    }
};
