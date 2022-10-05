class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        
        int left =0, right=0, maxLen=INT_MIN, zero= 0 ;
        
        while(right < nums.size()){
            if(nums[right] == 0){
                if(zero < k){
                    zero++ ;
                }
                else{
                    while(nums[left++] != 0) ;
                }
            }
            
            maxLen = max(maxLen, right-left+1) ;
            right++ ;
        }
        
        return maxLen ;
    }
};