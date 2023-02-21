class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int x=nums[0];
        for(int i=1;i<nums.size();i++) x=x^nums[i];
        return x;
    }
};


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size(),l=0,r=n-1,m;
            while(l<r){
            m=l+(r-l)/2;
            if(m%2==0){
                if(nums[m]==nums[m+1]) l=m+1;
                else {r=m;} }
            else{
                if(nums[m]!=nums[m+1]) l=m+1;
                else {r=m;}
            }
            }
            return nums[l];
    }
};
