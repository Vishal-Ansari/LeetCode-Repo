class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=nums[0];
        for(int i=1;i<nums.size();i++){
            x^=nums[i];
        }

        int setbit=0;
        for(int i=0;i<32;i++){
            int curr=1<<i;
            if((x & curr)!=0)
            {
                setbit=curr;
                break;
            }
        }
        int first=0,second=0;
        for(int i=0;i<nums.size();i++){
            if((nums[i]& setbit)!=0)
            first^=nums[i];
            else
            second^=nums[i];
        }

        return {first,second};
    }
};
