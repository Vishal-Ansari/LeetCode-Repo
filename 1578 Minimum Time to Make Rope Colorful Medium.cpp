class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        for(int i=1;i<colors.size();i++){
            if(colors[i-1]==colors[i]){
                ans+=min(neededTime[i-1],neededTime[i]);
                if(neededTime[i-1]>neededTime[i]) swap(neededTime[i-1],neededTime[i]);
            }
        }
        return ans;
    }
};