class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int ans=INT_MIN;
        int sum=0;
        for(auto it:nums){
            sum=sum+it;
            ans=max(ans,sum);
            if(sum<0) sum=0;
        }
        return ans;
    }
};  













class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_end=INT_MIN;
        int max_so_far=INT_MIN;
        
        for(int i=0;i<n;i++){
            if(max_end<0)
                max_end=nums[i];
            else
                max_end+=nums[i];
            
            max_so_far=max(max_so_far,max_end);
        }
        return max_so_far;
    }
};