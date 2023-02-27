class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int ans=0;
        for(int i =n-1; i>1; i--){
            int j=0, k=i-1;
            while(j<k){
                if(nums[i]<nums[j]+nums[k]){
                    ans += k-j;
                    k--;
                }else{
                    j++;
                }
            }
        }
        return ans;
    }
};
