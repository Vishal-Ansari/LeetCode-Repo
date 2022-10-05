class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        unordered_map<int, int> freqMap ;
        int sum=0, count=0 ;
        
        for(int i=0; i<nums.size(); i++){
            sum += nums[i] ;
            
            if(sum == goal)
                count++ ;
            
            if(freqMap.find(sum-goal) != freqMap.end()){
                count += freqMap[sum-goal] ;
            }
            
            freqMap[sum]++ ;
        }
        
        return count ;
    }
};