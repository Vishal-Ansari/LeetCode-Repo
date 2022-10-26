// using map and prefix sum array
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int curr_sum = 0;
        unordered_map<int, int> mp;
        for(int i = 0; i < n; i++)
        {
            curr_sum += nums[i];
            if(curr_sum % k == 0 && i > 0)
            {
                return true;
            }
            if(mp.count(curr_sum % k) && (i - mp[curr_sum % k] >= 2))  
                // mp .count return 1 if key is present else 0
            {
                return true;
            }
            if(mp.count(curr_sum % k) == 0)
            {
                mp[curr_sum % k] = i;
            }
        }
        return false;
    }
};












// without map
// class Solution {
// public:
//     bool checkSubarraySum(vector<int>& nums, int k) {
//         int n=nums.size();
//         for(int i=1;i<n;i++){
//             if(nums[i]==0 && nums[i-1]==0) return true;
//         }
        
//         for(int i=1;i<n;i++){
//             nums[i]=nums[i]+nums[i-1];
//             if(nums[i]%k==0) return true;
//             int j=i;
//             while(j>1 && nums[i]>k){
//                 if((nums[i]-nums[j-2])%k==0) return true;
//                 j--;
//             }
//         }
//         return false;
//     }

// };






// brute force
// class Solution {
// public:
//     bool checkSubarraySum(vector<int>& nums, int k) {
//         int n=nums.size();
//         if(n==1) return false;
//         int sums=nums[0]+nums[1];
        
//         if(sums%k==0) return true;
        
//         for(int i=0;i<n-1;i++){
//             sums=nums[i];
//             for(int j=i+1;j<n;j++){
//                 sums=sums+nums[j];
//                 if(sums%k==0) return true;
//             }
//         }
        
//         return false;
        
//     }
// };
