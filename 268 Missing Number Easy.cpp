class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=-1;
        int i;
        int n=nums.size();
        for( i=0;i<n;i++){
            if(nums[i]!=i){
                m=i;
                return m;
                break;
            }
        }
        if(m>=0)        
        return m;
        else return n;
    }
};


class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int sum=(n*(n+1))/2;
        for(int i=0;i<nums.size();i++)
            sum=sum-nums[i];
        return sum;
    }
};