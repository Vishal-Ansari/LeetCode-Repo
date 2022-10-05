class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left=0, right=0, zero=0, count=INT_MIN, zeroInd=-1 ;
        
        while(right < nums.size()){
            if(nums[right] == 0){
                if(zero == 0){
                    zero =1 ;
                    zeroInd =right ;
                }
                else{
                    left =zeroInd+1 ;
                    zeroInd = right ;
                }
            }
            count = max(count, right-left) ;
            right++ ;
        }
        
        return count ;
    }
};