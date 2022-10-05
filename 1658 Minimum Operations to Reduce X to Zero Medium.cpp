class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum =0, n=nums.size() ;
        
        for(int i=0; i<n; i++)
            sum += nums[i] ;
        
        int target = sum - x ;
        int left=0, right=0, currSum=0, maxLen=0 ;
        bool found =false ;
        
        while(right < n){
            currSum += nums[right] ;
            
            while(left <= right  &&  currSum > target){
                currSum -= nums[left] ;
                left++ ;
            }
            
            if(target == currSum){
                found= true ;
                maxLen = max(maxLen, right-left+1) ;
            }
            
            right++ ;
        }
        
        if(!found)
            return -1 ;
        return n-maxLen ;
    }
};