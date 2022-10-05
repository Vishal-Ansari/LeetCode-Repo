class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0, right=0, count=0, n= s.size()-1 ;
        unordered_map<char, int> mpp ;
        
        while(right < s.size()){
            mpp[s[right]]++ ;
            
            while(mpp['a']  &&  mpp['b']  &&  mpp['c']){
                count += 1+ (n - right) ;
                
                mpp[s[left]]-- ;
                left++ ;
            }
            
            right++ ;
        }
        
        return count ;
    }
};