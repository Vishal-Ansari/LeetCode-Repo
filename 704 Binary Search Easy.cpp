class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
    
        while(low<=high){
             int mid=(high+low)/2;
            if(nums[mid]==target)
                return mid;
            else if(target>nums[mid])
                low=mid+1;
            else
                high=mid-1;
        }
        return -1;
    }
};