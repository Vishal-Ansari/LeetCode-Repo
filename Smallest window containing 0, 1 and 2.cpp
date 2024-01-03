class Solution {
  public:
    int smallestSubstring(string s) {
        int mini = INT_MAX, x = -1, y = -1, z = -1, n = s.size();
        
        for(int i = 0; i < n; i++) {
            if(s[i] == '0')     
                x = i;
            else if(s[i] == '1')
                y = i;
            else if(s[i] == '2')
                z = i;
                
            if(x == -1 or y == -1 or z == -1)
                continue;
                
            int maxL = max({x, y, z});
            int minL = min({x, y, z});
            mini = min(mini, maxL - minL + 1);
        }
        
        return mini == INT_MAX ? -1 : mini;
    }
};
