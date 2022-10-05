class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int i=0 ,c=0, r=nums.size();
        int temp;
        for(i=0;i<r;i++)
        {
            if(nums[i]%2==0) {
               temp=nums[i];
            nums[i]=nums[c];
            nums[c]=temp;
                c++;
            }
            
        }
             return nums;               
    }
};