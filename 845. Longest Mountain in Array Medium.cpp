class Solution {
public:
    int longestMountain(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return 0;
        int ans=0;
        int i=1;
        while(i<n){
            int upper=0,lower=0;
            while(i<n && nums[i-1]==nums[i]){
                i++;
            }
            while(i<n && nums[i-1]<nums[i]){
                i++;
                upper++;
            }
            while(i<n && nums[i-1]>nums[i]){
                i++;
                lower++;
            }

            if(upper && lower)
            ans=max(ans,upper+lower+1);
        }
        return ans;
    }
};
