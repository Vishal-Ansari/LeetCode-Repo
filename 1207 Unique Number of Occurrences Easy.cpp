class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>mp;

        for(auto a:arr) mp[a]++;

        for(auto it:mp){
            auto x=it.second;
            int count=0;
            for(auto b:mp ){
                auto y=b.second;
                if(y==x){
                    count++;
                    if(count>1)
                    return false;
                }
            }
        }
        return true;      
    }
};
