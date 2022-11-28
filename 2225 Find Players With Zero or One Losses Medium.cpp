class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<vector<int>>ans;
        vector<int>win;
        vector<int>loss1;
        map<int,int>mp1;
        map<int,int>mp2;

        for(int i=0;i<matches.size();i++){
            mp1[matches[i][0]]++;
            mp2[matches[i][1]]++;
        }
        
        for(auto x: mp1){
            auto temp=x.first;
            if(mp2.find(temp)==mp2.end())
                win.push_back(temp);
        }
        for(auto x:mp2)
        if(x.second==1) loss1.push_back(x.first);

        
        ans.push_back(win);
        ans.push_back(loss1);

        return ans;
    }
};
