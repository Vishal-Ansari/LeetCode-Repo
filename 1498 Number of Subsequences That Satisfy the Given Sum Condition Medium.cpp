class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int mod=10000000007;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<n;i++){
            int j=n-1;
            while(i<=j){
                if(nums[i]+nums[j]<=target){
                    ans+=pow(2,j-i);
                    ans=ans%mod;
                    break;
                }
            else j--;
            }
        }
        return ans;
    }
};
