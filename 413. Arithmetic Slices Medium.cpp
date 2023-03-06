class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int ans=0,x=0;
        for(int i=1;i<n-1;i++){
            if(nums[i]-nums[i-1]==nums[i+1]-nums[i]){
                x++;
                ans+=x;
            }
            else{
                x=0;
            }
        }
        return ans;
    }
};
