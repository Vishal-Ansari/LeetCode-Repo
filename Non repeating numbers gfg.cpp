class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int temp=0;
        for(int i=0;i<nums.size();i++){
            temp=temp^nums[i];
        }
        int setbit= temp& -temp;
        int zero=0, one=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] & setbit){
                one=one^nums[i];
            }else{
                zero=zero^nums[i];
            }
        }
        if(one<zero) return {one,zero};
        
        return {zero,one};
    }
};
