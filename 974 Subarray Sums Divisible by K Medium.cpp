class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mp;
        int ans=0;
        int sum=0,rem=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            rem=sum%k;
            if(rem<0)
                rem=rem+7;
            
           if(mp.find(rem)!=mp.end()){
               ans+=mp[rem];
               mp[rem]++;
           }
            else
                mp[rem]++;
        }
        return ans;
    }
    
};
