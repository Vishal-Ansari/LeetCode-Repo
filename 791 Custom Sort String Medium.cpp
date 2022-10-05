class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int>mp;
        string ans="";
        for(auto x: s)
            mp[x]++;
        
        for(auto it: order){
            if(mp.find(it)!=mp.end()){
                auto temp=mp.find(it);
                int count= temp->second;
                
                string s(count,it);
                    ans+=s;
                
                mp.erase(it);
            }
        }
        for(auto x: mp){
            string s(x.second,x.first);
            ans+=s;
        }
        return ans;
    }
};