class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left=0, right=0, sum=0, count=0;
        
        while(right < arr.size()){
            sum += arr[right] ;
            
            if(right-left+1 == k){
                int avg = sum/k ;
                
                if(avg >= threshold){
                    count++ ;
                }
                
                sum -= arr[left] ;
                left++ ;
            }
            
            right++ ;
        }
        
        return count ;
    }
};