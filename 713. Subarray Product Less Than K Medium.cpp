class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        long long product=1;
        int count=0,j=0;
        for(int i=0;i<n;i++){
            product*=nums[i];
            while(j<=i && product>=k){
                product/=nums[j];
                j++;
            }
            count+=i-j+1;
        }
        return count;
    }
};
