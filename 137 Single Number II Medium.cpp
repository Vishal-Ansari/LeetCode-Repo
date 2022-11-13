class Solution{
    public:
    int singleNumber(vector<int>&nums){
        int ans=0;
        int n=nums.size();
        vector<int> f(32,0);
        for(int e: nums){
            for(int i=0;i<32;i++){
                if(e & (1<<i))
                f[i]++;
            }
        }
        for(int i=0;i<32;i++){
            if(f[i]%3==1)
            ans+= 1<<i;
        }
        return ans;

    }
};






// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++)
//         mp[nums[i]]++;
//         int ans;
//         for(auto x:mp){
//             if(x.second==1)
//             ans=x.first;
//         }
//         return ans;
//     }
// };
