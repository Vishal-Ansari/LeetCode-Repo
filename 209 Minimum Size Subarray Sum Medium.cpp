class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0, right=0, n=nums.size() ;
        int currSum=0, minLen= INT_MAX ;
        bool found =false ;
        
        while(right < n){
            currSum += nums[right] ;
            
            while(currSum >= target){
                found =true ;
                minLen = min(minLen, right-left+1) ;
                currSum -= nums[left] ;
                left++ ;
            }
            
            right++ ;
        }
        
        if(!found)
            return 0 ;
        return minLen ;
    }
};