class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int i=0,j=n-1;
        while(i<=j){
            if(nums[i]+nums[j]==target) return {i+1,j+1};
            else if(nums[i]+nums[j]>target) j--;
            else i++;
        }
        return {};
    }
};
