class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int low=0,high=n-1;
        while(low<high){
            int mid=(high+low)/2;
            if(nums[mid]<nums[mid+1]) low=mid+1;
            else high=mid;
        }
        return low;
    }
};
