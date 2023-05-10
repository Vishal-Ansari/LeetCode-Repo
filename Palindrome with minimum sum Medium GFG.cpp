class Solution {
  public:
    int minimumSum(string s) {
        int n = s.size();
        int l=0,r=s.size()-1;
        while(l < r){
            if(s[l] != s[r]){
                if(s[l] == '?') s[l] = s[r];
                else if(s[r] == '?') s[r] = s[l];
                else return  -1;
            }
            l++;
            r--;
        }
        
        int i=0,ans = 0,first,second;
        while(i<n && s[i] == '?') i++;
        
        if(i < n){
            first = s[i] - 'a';
            i++;
        }
        
        while(i < n){
            while(i<n && s[i] == '?') i++;
            
            if(i<n){
                second = s[i] - 'a';
                ans += abs(first - second);
                
                first = second;
            }
            i++;
        }
        
        return ans;
    }
};
