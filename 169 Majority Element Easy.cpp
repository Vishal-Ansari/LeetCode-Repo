class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};




class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int v=0,c=0;
        for(auto a: nums){
            if(v==0)
                c=a;
            if(c==a)
            v++;
            else
                v--;
        }
        return c;
    }
};