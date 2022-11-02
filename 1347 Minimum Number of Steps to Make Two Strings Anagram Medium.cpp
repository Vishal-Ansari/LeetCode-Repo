class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        
        int count=0;
         
        for(auto c: t)
            mp[c]++;
        
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(mp.find(c)!=mp.end()){
                if(mp[c]>1)
                    mp[c]--;
                else
                    mp.erase(c);
            } 
            else
                count++;
        }
        
        
        return count;
    }
};
