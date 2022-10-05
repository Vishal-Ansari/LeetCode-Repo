class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0, right=0, count=0, sum=0 ;
        
        while(right < s.size()){
            if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u'){
                sum++ ;
            }
            
            if(right-left+1 == k){
                count = max(count, sum) ;
                if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u'){
                    sum-- ;
                }
                left++ ;
            }
            
            right++ ;
        }
        
        return count ;
    }
};