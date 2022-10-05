class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
            if(i==0)
                ans[i]=nums[i];
            else
                ans[i]=ans[i-1]+nums[i];
        }
        return ans;
    }
};