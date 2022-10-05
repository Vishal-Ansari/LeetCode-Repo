class Solution {
public:
    bool checkIfMatch(string s1, int i, string s2, int j){
        for(int k=0; k<s2.size(); k++){
            if(s1[i+k] != s2[k])
                return false ;
        }
        return true ;
    }
        
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0 ;
        if(haystack.size() < needle.size()) return -1 ;
        
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i] == needle[0]){
                if(checkIfMatch(haystack, i, needle, 0))
                    return i ;
            }
        }
        
        return -1 ;
    }
};




class Solution {
public:
    int strStr(string haystack, string needle) {
        int n1=haystack.length();
        int n2=needle.length();
        int ans=-1,count=0;
        int j=0,i=0;
        
        for(int i=0;i<n1-n2+1;i++){
            if(haystack[i]==needle[0]){
                count=0;
                j=0;
                for(int j=0;j<n2;j++){
                    if(haystack[i+j]==needle[j]){
                        count++;
                        if(count==1) ans=i;
                        if(count==n2)
                            return ans;
                    }
                   
                }
            }
        }
        
            
        return -1;
    }
};